#include <bits/stdc++.h>

using namespace std;

int main(){
    string cifrada;
    string crib;
    vector<char> v_cifrada;
    vector<char> v_crib;
    int nPossivel = 0;
    int repetido = 0;


    cin >> cifrada >> crib;

    // Transformando em vector de char

    for(char letra : cifrada){
        v_cifrada.push_back(letra);
    }

    for(char letra : crib){
        v_crib.push_back(letra);
    }

    if ((v_crib.size())>(v_cifrada.size()))
    {
        cout << "stop";
        return 0;
    }

    // Tamanho delas
    int size_crifrada = v_cifrada.size();
    int size_crib = v_crib.size();
    // Diferença para numero de comparações (Tem que add 1 no for pois temos que comparar na posição inicial também)
    int comparacoes = size_crifrada - size_crib;
    //cout << "Sao " << comparacoes << "Comparacoes" << endl << endl;

    for(int i=0; i < comparacoes + 1; i++){
        //cout << "Comparacao " << i+1 << endl << endl;
        for (int j = 0; j < size_crib + 1; j++)
        {
            //cout << "Comparacao index " << j << endl << endl;
            if (v_cifrada[j] == v_crib[j])
            {
                //cout << "NAO FOI possivel fazer na comparacao: " << i+1 << " nos indexes " << j << endl << endl;
                if (repetido == 0)
                {
                    nPossivel++;
                    repetido = 1;
                }
                //cout << "VALOR CONTADOR NAO POSSIVEL: " << nPossivel << endl << endl;
                repetido = 0; // Ao trocar de comparação, o repetido volta a ser false (nPossivel repetido)
            }
        }

        v_cifrada.erase(v_cifrada.begin() + 0);
        
    }

    int possivel = (comparacoes + 1) - nPossivel;

    cout << possivel;




    

    

    return 0;
}