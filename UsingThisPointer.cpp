//
//  UsingThisPointer.cpp
//  ReferenceTypes
//
//  Created by Lee Sheng on 2020/7/26.
//  Copyright © 2020 Lee Sheng. All rights reserved.
//

//#include <stdio.h>
//#include <cstdio>
//struct ClockOfYear {
//    ClockOfYear() {
//        year = 2100;
//    }
//    void add_year(){
//        year ++;
//    }
//    bool set_year(int year){
//        if (year < 2020) return false;
//        this->year = year;
//        return true;
//    }
//    int get_year() const{
//        return year;
//    }
//    private:
//    int year;
//};
//bool is_leap_year(const ClockOfYear& year){
//    if(year.get_year() % 4 > 0) return false;
//    if(year.get_year() % 100 > 0) return true;
//    if(year.get_year() % 400 > 0) return false;
//    return true;
//}
//int main(){
//    const ClockOfYear year;
//    printf("The year %d is leap year:%d\n", year.get_year(), is_leap_year(year));
//    return 0;
//}
