#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp; // hasing kora kunu order maintain kora nah;
    // map<key,value> map_Name;

    //one way inserting:
    mp.insert({"sakib al hasan", 75});
    mp.insert({"tamim iqbal", 19});
    mp.insert({"mamun", 100});
    mp.insert({"shamim", 79});

    //two way inserting:
    mp["mahmud"] = 101;
    mp["Jak"] = 201;
    mp.insert(make_pair("kowkow", 10000));

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    cout << mp["shamim"] << endl; // if shamim key not found so will output = 0
    //but if "shamim" orginal value is 0 so we can not use that, follow below->


    if(mp.count("shamim")){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    return 0;
}

/*
Input:
5
Rahim 25 85
Shanto 36 99
Tamim 9 85
Sakib 23 95
Musfiq 30 89

Output:
Jak 201
mahmud 101
mamun 100
sakib al hasan 75
shamim 79
tamim iqbal 19
79
Found
*/