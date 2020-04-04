//Manages a list of top ten hyperlinks
#include <iostream>
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;
using std::cout;
using std::endl;

TopTenList::TopTenList()
{
    _list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
   _list[index-1] = link; 
}

Hyperlink TopTenList::get(int index)
{
    return _list[index-1];
}

void TopTenList::display_forward()
{
    for(auto link : _list)
        cout << link.text << endl; 
}

void TopTenList::display_backward()
{
    for(int i=9; i>=0; i--) 
        cout << _list[i].text << endl;
}
