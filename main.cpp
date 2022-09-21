#include <iostream>

using namespace std;


int main()
{
    const double valorFileira = 12.5;
    int contLugares = 0;
    cout<<"=================================================================";
    string parada = "";
    int cinema [7] [10] = {};
    for (int i = 0; i < 7; i ++){
        cout << endl;
        for(int j = 0; j < 10; j ++){
            if (cinema[i][j] == 0){
                cout << "Fileira: " << i+1 <<" Poltrona:" <<j+1 << ": " << " ESPACO VAZIO" <<endl;
            }
        }
    }

    cout<<endl;
    cout<<endl;
    while(parada!="nao"){
        int fileira = 0;
        int poltrona = 0;
        cout<<"================================================================="<<endl;
        cout<<"Informe a fileira que voce deseja escolher sua poltrona ";
        cin>>fileira;
        cout<<"================================================================="<<endl;
        cout<<"Agora informe qual poltrona dessa fileira, voce deseja sentar ";
        cin>>poltrona;
        while(cinema[fileira-1][poltrona-1] == 1){
            cout<<"Lugar já encontra-se OCUPADO"<<endl;
            cout<<"Informe a fileira que voce deseja escolher sua poltrona ";
            cin>>fileira;
            cout<<"================================================================="<<endl;
            cout<<"Agora informe qual poltrona dessa fileira, voce deseja sentar DIFERENTE DA ANTERIOR";
            cin>>poltrona;
        }
        cout<<"================================================================="<<endl;
        cout<<endl;
        while(fileira < 1 || fileira > 7 && poltrona < 1 || poltrona > 10){
            cout<<"ATENCAO. Enquanto voce digitar uma fileira menor que 1 ou maior que 7\nE uma poltrona menor 1 ou maior 10, Nao vamos conseguir realizar a compra"<<endl;
            cout<<"================================================================="<<endl;
            cout<<"Informe a fileira que voce deseja escolher sua poltrona ";
            cin>>fileira;
            cout<<"Agora informe qual poltrona dessa fileira, voce deseja sentar ";
            cin>>poltrona;
            cout<<"================================================================="<<endl;

            while(cinema[fileira-1][poltrona-1] == 1){
                cout<<"Lugar ja encontra-se OCUPADO"<<endl;
                cout<<"Informe a fileira que voce deseja escolher sua poltrona ";
                cin>>fileira;
                cout<<"================================================================="<<endl;
                cout<<"Agora informe qual poltrona dessa fileira, voce deseja sentar DIFERENTE DA ANTERIOR";
                cin>>poltrona;
        }

    }



        cinema[fileira-1][poltrona-1] = 1;


        for (int i = 0; i < 7; i ++){
            cout << endl;
            for(int j = 0; j < 10; j ++){
                if(cinema[i][j] == 0){
                cout << "Fileira: " << i+1 <<" Poltrona:" <<j+1 << ": " <<" ESPACO VAZIO" <<endl;
            }
            else{
                cout << "Fileira: " << i+1 <<" Poltrona:" <<j+1 << ": " <<" ESPACO OCUPADO" <<endl;
            }
        }
    }
        cout<<endl;
        cout<<"============================================"<<endl;
        cout<<"Digite nao para 'parar'\n==============================\nDigite qualquer coisa para continuar comprando, exceto 'nao' "<<endl;
        cout<<"================================================================="<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"DESEJA COMPRAR MAIS ACENTOS? ";
        cin>>parada;

    }
    for(int i = 0; i < 7; i ++){
        cout<<endl;
        for (int j = 0; j<10; j++){
            //cout<<"F: ["<<i<<"] "<<"[ "<<j<<"]: "<< cinema[i][j] <<endl;
            if(cinema[i][j] == 1){
                contLugares++;
            }
        }
    }

    cout<<endl;
    printf("Total de Lugares vendidos: %d", contLugares);
    cout<<endl;
    printf("O lucro foi: %.2f ", valorFileira * contLugares);
    cout<<endl;
    cout<<endl;
}
