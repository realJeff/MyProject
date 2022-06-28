//
// Created by centos on 6/27/22.
//

#ifndef MYTEST_MYADD_HPP
#define MYTEST_MYADD_HPP

namespace MyNamespace {

class MyAdd
{
public:
    int operator()( int a, int b ) const
    {
        return a + b;
    }
};

}

#endif //MYTEST_MYADD_HPP
