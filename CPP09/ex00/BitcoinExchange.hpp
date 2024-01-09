/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 07:16:39 by ybourais          #+#    #+#             */
/*   Updated: 2024/01/09 06:53:34 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream> 
#include <list>
#include <sstream> //istringstream


struct KeyValue 
{
    std::string key;
    double value;

    KeyValue(const std::string &k, double v) : key(k), value(v) {}
};

#define NO_SEPARATOR -1337
#define MAX_YEAR 2050
#define MIN_YEAR 0
#define MIN_MONTH 1
#define MAX_MONTH 12
#define MIN_DAY 1
#define MAX_DAY 31
#define DACH '-' 


void PrintDataBase(std::list<KeyValue> const database);

int StorData(std::list<KeyValue> &DataContainer, char TxtSeparator, std::string FilePath);
int CheckDate(std::string date);
long converter(std::string date);
double ValueMultipliedByTheExchangeRate(std::list<KeyValue> &Data, std::string date, double value);
void PrintResult(std::list<KeyValue> &Data, std::list<KeyValue> &Txt);

#endif
