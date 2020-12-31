
#include<bits/stdc++.h>

using namespace std;

struct node{

    string process_name;
    int burst;
};

int j,quantam;
node v[ 100000 ];
node a[ 100000 ];
int last[ 100000 ];
int temp[ 10000 ];
int process;

void BFS(){

    j = 0;
    int sum = 0;

    queue< int > q;

    q.push(v[ 0 ].burst);
     cout << "GNTT CHART : ";

    while( !q.empty() ){

        q.pop();


        for(int i = 0; i < process; i++){

            if(v[ i ].burst != 0){

                if(v[ i ].burst <= quantam){

                    sum += v[ i ].burst;
                    v[ i ].burst = 0;
                }
                else {

                    sum += quantam;
                    v[ i ].burst = v[ i ].burst - quantam;
                }

                q.push(v[ i ].burst);

                a[ j ].process_name = v[ i ].process_name;
                a[ j ].burst = sum;
                last[ i ] = a[ j ].burst;
                j++;
            }
        }
    }
}

int main(){

    scanf("%d",&process); /// 4

    for(int i = 0; i < process; i++) {

        cin >> v[ i ].process_name;
        cin >> v[ i ].burst;

        temp[ i ] = v[ i ].burst;
    }

    scanf("%d",&quantam);

    BFS();

    for(int i = 0; i < j; i++){

        if(i == 0) printf("0 ");

        cout << a[ i ].process_name << " " << a[ i ].burst << " ";
    }
    printf("\n");
  cout << "\nThe Average Waiting Time : ";
    int sum = 0;

    for(int i = 0; i < process; i++){

        sum = sum + (last[ i ] - 0 - temp[ i ]);
    }

    printf("%d\n",sum / process);

    return 0;
}

