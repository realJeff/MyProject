//
// Created by centos on 6/28/22.
//

#ifndef MYPROJECT_MYMULTIPLY_HPP
#define MYPROJECT_MYMULTIPLY_HPP

namespace MyNamespace {

class MyMultiply
{
public:
    int operator()( int a, int b ) const
    {
        return a * b;
    }
};

}

#endif //MYPROJECT_MYMULTIPLY_HPP
