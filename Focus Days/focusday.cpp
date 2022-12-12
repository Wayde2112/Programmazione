
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

#include <cmath>
#include <list>
#include <stdio.h>


using namespace std;

int main(){
    int D1 = 0, N1 = 0;

    cin >> D1;
    cin >> N1;
    vector<int> List;

    int max2=0, sum2=0;
    if (D1 > N1)  {
        cout << "impossible" << endl;
        return 0;
    }

    int tmp;

    for(int i=0;i<N1;i++){
        cin>>tmp;
        List.push_back(tmp);
    }

    int max1= 100001, sum1 = 100001, i = 0, num =0;

    for(int i=0;i<N1-D1+1;i++){
        vector<int> group = {List.begin()+i, List.begin()+i+D1};
        max2=*max_element(group.begin(), group.end());
        if ((max2 < max1)){
            max1 = max2;
            num = i;
        }
    }


    cout<< num+1 << endl;
    return 0;
}
