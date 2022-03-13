#include <iostream>
int main(){
    int i;
    std::cin>>i;
    int j, k, key, list[i];

    for(int s=0; s<i; s++){
        std::cin>>list[s];
    }

    for(j=1; j<i; j++){
        key = list[j];
        for(k= j-1; (k>=0) && (list[k]>key); k--){
            list[k+1] = list[k];
        }
        list[k+1] = key;
    }

    for(int s=0; s<i; s++){
        printf("%d\n", list[s]);
    }
}