//
//  ArrowOperater.cpp
//  ReferenceTypes
//
//  Created by Lee Sheng on 2020/7/24.
//  Copyright © 2020 Lee Sheng. All rights reserved.
//

//#include <stdio.h>
//#include <cstdio>
//struct ClockOfYear {
//    ClockOfYear() {
//        year = 2019;
//    }
//    void add_year(){
//        year ++;
//    }
//    bool set_year(int new_year){
//        if (new_year < 2020) return false;
//        year = new_year;
//        return true;
//    }
//    int get_year(){
//        return year;
//    }
//    private:
//    int year;
//};
//int main(){
//    ClockOfYear years;
//    ClockOfYear *years_ptr = &years;
//    years_ptr->set_year(2020); //-> 1.dereference 2.access a member
//    printf("The year\'s address is:%p\n", years_ptr);
//    printf("The year\'s value:%d\n", years_ptr->get_year());
//    printf("The year\'s value:%d\n", (*years_ptr).get_year());
//    return 0;
//}
