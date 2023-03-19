#include <iostream>
#include <vector>

using namespace std;

vector<int> cutSquares( int n, int m ){
    vector<int> squares;
    
    while( (n != 0) && (m !=0 ) ){
        if(n > m){
            squares.push_back(m);
            n -= m;
        }else{
            squares.push_back(n);
            m -= n;
        }
    }
    
    return squares;
}

int main()
{
    int n;
    int m;
    
    cout << "Enter rectangle length N and M: ";
    cin >> n >> m;
    
    vector<int> squares = cutSquares( n, m );
    
    for( int i = 0; i < squares.size(); i++ ){
        cout << squares[i] << "x" << squares[i];
        if( i != (squares.size() - 1) ){
            cout << ",";
        }
    }

    return 0;
}
