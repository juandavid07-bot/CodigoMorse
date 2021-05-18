#include<iostream>
#include <sstream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
using namespace std;

void morse(string m)
{
	string po;
   
	for(int i=0; i<m.length();i++)
	{
		po = m.at(i);
		if(m.at(i) =='a'or m.at(i) =='A' ){
			cout<<".-  ";
		}
		else if(m.at(i) =='b'or m.at(i) =='B' ){
			cout<<"-...  ";
		}
		else if(m.at(i) =='c'or m.at(i) =='C' ){
			cout<<"-.-.  ";
		}
		else if(m.at(i) =='d'or m.at(i) =='D' ){
			cout<<"-..  ";
		}
		else if(m.at(i) =='e'or m.at(i) =='E' ){
			cout<<".  ";
		}
		else if(m.at(i) =='f'or m.at(i) =='F' ){
			cout<<"..-.  ";
		}
		else if(m.at(i) =='g'or m.at(i) =='G' ){
			cout<<"--.  ";
		}
		else if(m.at(i) =='h'or m.at(i) =='H' ){
			cout<<"....  ";
		}
		else if(m.at(i) =='i'or m.at(i) =='I' ){
			cout<<"..  ";
		}
		else if(m.at(i) =='j'or m.at(i) =='J' ){
			cout<<".---  ";
		}
		else if(m.at(i) =='k'or m.at(i) =='K' ){
			cout<<"-.-  ";
		}
		else if(m.at(i) =='l'or m.at(i) =='L' ){
			cout<<".-..  ";
		}
		else if(m.at(i) =='m'or m.at(i) =='M' ){
			cout<<"--  ";
		}
		else if(m.at(i) =='n'or m.at(i) =='N' ){
			cout<<"-.  ";
		}
		else if(m.at(i) =='o'or m.at(i) =='O' ){
			cout<<"---  ";
		}
		else if(m.at(i) =='p'or m.at(i) =='P' ){
			cout<<".--.  ";
		}
		else if(m.at(i) =='q'or m.at(i) =='Q' ){
			cout<<"--.-  ";
		}
		else if(m.at(i) =='r'or m.at(i) =='R' ){
			cout<<".-.  ";
		}
		else if(m.at(i) =='s'or m.at(i) =='S' ){
			cout<<"...  ";
		}
		else if(m.at(i) =='t'or m.at(i) =='T' ){
			cout<<"-  ";
		}
		else if(m.at(i) =='u'or m.at(i) =='U' ){
			cout<<".-.  ";
		}
		else if(m.at(i) =='v'or m.at(i) =='V' ){
			cout<<"...-  ";
		}
		else if(m.at(i) =='w'or m.at(i) =='W' ){
			cout<<".--  ";
		}
		else if(m.at(i) =='x'or m.at(i) =='X' ){
			cout<<"-..-  ";
		}
		else if(m.at(i) =='y'or m.at(i) =='Y' ){
			cout<<"-.--  ";
		}
		else if(m.at(i) =='Z'or m.at(i) =='z' ){
			cout<<"--..  ";
		}
		else{
			cout<<"   ";
		}
			
		
    }
		cout<<endl;
   		
	
	
	
}

void palabras (string l )
{
	string es;
 istringstream iss(l);
 stringstream morse;
 
 while ( getline(iss, es, ' ') ){
  if(strcmp(es.c_str(),".-")== 0)
  {
  	  cout <<"a";
  }
 
  else if(strcmp(es.c_str(),"-...")== 0)
  {
  	cout << "b";
  }
   
  else if(strcmp(es.c_str(),"-.-.")== 0)
  {
  	cout << "c";
  }
   
  else if(strcmp(es.c_str(),"-..")== 0)
  {
  	cout << "d";
  }
    else if(strcmp(es.c_str(),".")== 0)
  {
  	cout << "e";
  }
  else if(strcmp(es.c_str(),"..-.")== 0)
  {
  	cout << "f";
  }
  else if(strcmp(es.c_str(),"--.")== 0)
  {
  	cout << "g";
  }
  else if(strcmp(es.c_str(),"....")== 0)
  {
  	cout << "h";
  }
  else if(strcmp(es.c_str(),"..")== 0)
  {
  	 cout << "i";
  }
  
  else if(strcmp(es.c_str(),".---")== 0)
  {
  	cout << "j";
  }
   
  else if(strcmp(es.c_str(),"-.-")== 0)
  {
  	cout << "k";
  }
   
  else if(strcmp(es.c_str(),".-..")== 0)
  {
  	cout << "L";	
  } 
  else if(strcmp(es.c_str(),"--")== 0)
  {
  	cout << "M";	
  }
  else if(strcmp(es.c_str(),"-.")== 0)
  {
  	 cout << "N";	
  }
  else if(strcmp(es.c_str(),"---")== 0)
  {
  	cout << "O";	
  }
  else if(strcmp(es.c_str(),".--.")== 0)
  {
  	cout << "P";	
  }
   
  else if(strcmp(es.c_str(),"--.-")== 0)
  {
  	   cout << "Q";	
  }
  else if(strcmp(es.c_str(),".-.")== 0)
  {
  	cout << "R";
  }
   
  else if(strcmp(es.c_str(),"...")== 0)
  {
  	cout << "S";
  }
   
  else if(strcmp(es.c_str(),"-")== 0)
  {
  	cout << "T";
  }
   
  else if(strcmp(es.c_str(),"..-")== 0)
  {
  	 cout << "U";	
  }
  else if(strcmp(es.c_str(),"...-")== 0)
  {
  	 cout << "V";
  }
  
  else if(strcmp(es.c_str(),".--")== 0)
  {
  	cout << "W"; 	
  }  
  else if(strcmp(es.c_str(),"-..-")== 0)
  {
  	cout << "X";	
  }
  else if(strcmp(es.c_str(),"-.--")== 0)
  {
  	cout << "Y";	
  }
  else if(strcmp(es.c_str(),"--..")== 0)
  {
  	cout << "Z"; 
  }
    
 }
 
}
int main()
{ 
string p ;
int c = 0;
	

while(c!=3)
{
	cout<<"1  Traducir a codigo morse\n";
    cout<<"2  Traducir un mensaje\n";
    cout<<"3  Salir\n\n";
	cin>>c;
	switch(c)
	{
		case 1:
			
	
				cout <<"ingrese la palabra, para traducir"<<endl;  
			    cout<<endl;
			     cin.ignore();
				getline(cin, p);
			   // cout<<p.size();
				 morse(p);
				
			
			    
			    
			
		break;

 		case 2:
				cout <<"ingrese el codigo morse, para traducir\n";  
			    cout<<endl;
			    cin.ignore();
			    cin.ignore();
				getline(cin, p);
					   // cout<<p.size();
				palabras(p);		
		break; 		
		
		case 3:
				cout<<" OPCION 3\n";		
		break;		
	}	
}
return 0;
}




