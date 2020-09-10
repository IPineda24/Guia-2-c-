#include<iostream>
using namespace std;


 struct  students {      
  string name[15];  
  string last_name[15];
  float score[]; 
      
 }; 


int main(){
      struct students ts;    
    int ns;int nofScores;
    float average = 0;
   cout<<"cuantos estudiantes quieres ingresar?"<<endl;
   cin>>ns;
   for (int i = 0; i < ns; i++)
   {
      cout << "nombre estudiante " << i+1 << ": ";
       cin >>ts.name[i];
         cout << "apellido estudiante " << i+1 << ": ";
        cin >>ts.last_name[i];
        int n2;
         cout<<"cuantas notas ingresaras?"<<endl;
        cin>>n2;
        float totaln=0;
    for (int j = 0; j < n2; j++){
        float nota=0;
        cout << "escribe tu nota numero " << j+1 << ": "; cin >>nota;
      totaln+=nota;
    }
   ts.score[i]=totaln/n2;
   
   }
 float mayor = 0;
  int posicion;

  for (int i = 0; i < ns; i++){

      if (ts.score[i] > mayor){

          mayor = ts.score[i];
          posicion = i;

      }

  }

  cout<< ts.name[ posicion]<<" "<<ts.last_name[ posicion]<<" es el mayor con nota de: "<<ts.score[ posicion]<<endl; 
  cout<<"@derechos reservados:irvin Pineda"<<endl;
}