//
//  ConstInitializeList.cpp
//  ReferenceTypes
//
//  Created by Lee Sheng on 2020/7/26.
//  Copyright © 2020 Lee Sheng. All rights reserved.
//

#include <stdio.h>
#include <cstdio>
struct ClockOfYear {
//    ClockOfYear() {
//        year = 2100;
//    }
    void add_year(){
        year ++;
    }
    bool set_year(int year){
        if (year < 2020) return false;
        this->year = year;
        return true;
    }
    int get_year() const{
        return year;
    }
//    private:
    int year;
};
struct Avout {
  Avout(const char* name, int year_apert)
    : name {name}, apert{year_apert} {}
    void announce() const{
        printf("My name is %s and my next apert is %d.\n", name, apert.get_year());
    }
    const char* name;
    ClockOfYear apert;
};
int main() {
 Avout raz{ "Erasmas", 3010 };
 Avout jad{ "Jad", 4000 };
 raz.announce();
 jad.announce();
}
