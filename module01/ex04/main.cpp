/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:52:31 by jgomes-c          #+#    #+#             */
/*   Updated: 2022/11/05 18:52:31 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int openIn(std::ifstream &inFile, std::string file);
int openOut(std::ofstream &outFile, std::string file);
int set_setup(std::string file, std::string rem, std::string rep);
void getInBuffer(std::ifstream &inFile, std::string &inBuffer);
void replaceStringOutBuffer(std::string inBuffer, std::string &outBuffer,
							std::string rem, std::string rep);
void setDataOut(std::ofstream &outFile, std::string outBuffer);

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Is need 4 aruments" << std::endl;
		return (false);
	}

	if (set_setup(av[1], av[2], av[3]) == false)
		return (false);

	return (true);
}

int set_setup(std::string file, std::string rem, std::string rep) // he got the 3 paramathers
{
	std::ifstream inFile;  // test
	std::ofstream outFile; // and this is test.replace
	std::string inBuffer;
	std::string outBuffer;

	if (rem.empty() || rep.empty())
		return (false);
	if (openIn(inFile, file) == false)
		return (false);

	getInBuffer(inFile, inBuffer);
	replaceStringOutBuffer(inBuffer, outBuffer, rem, rep);
	if (openOut(outFile, file) == false) //create the file
		return (false);

	setDataOut(outFile, outBuffer); //copy the data inside the file
	inFile.close();

	return (true);
}

int openIn(std::ifstream &inFile, std::string file) //open the file
{
	inFile.open(file.c_str(), std::ifstream::in); //c_str => Returns a pointer to an array that contains a null-terminated sequence of characters , representing the current value of the string object.
	if (inFile.is_open() == false)
	{
		inFile.close();
		return (false);
	}

	return (true);
}

int openOut(std::ofstream &outFile, std::string file) //create the test.replace
{
	file.append(".replace");
	outFile.open(file.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (outFile.is_open() == false)
	{
		outFile.close();
		return (false);
	}

	return (true);
}

void getInBuffer(std::ifstream &inFile, std::string &inBuffer) // read the test
{
	std::stringstream bufferRead;
	bufferRead << inFile.rdbuf(); // rdbuf() read and pass to the bufferRead
	inBuffer = bufferRead.str();
}

void replaceStringOutBuffer(std::string inBuffer, std::string &outBuffer,
							std::string rem, std::string rep)
{ //he find the word, and copy until the word, and then replace it with the string
	size_t x;

	while (inBuffer.find(rem) != inBuffer.npos)
	{
		x = inBuffer.find(rem);  //fisrt the postion number
		outBuffer.append(inBuffer.substr(0, x)); //second he concact. 
		outBuffer.append(rep); //three he made the change
		inBuffer = inBuffer.substr(x + rem.size(), inBuffer.size()); //and her he cut the find part
	}
	outBuffer.append(inBuffer); //concat the rest
}

void setDataOut(std::ofstream &outFile, std::string outBuffer)
{
	outFile << outBuffer; //outfile is the file, and outbuffer is the buffer
	outFile.close();
}