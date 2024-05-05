#include <iostream>

using namespace std;

int main(){
    cout << "*************MINI-JUEGO: PIEDRA, PAPEL Y TIJERAS******************\n";
    string userInput, userName, computerInput, prompt;
    srand(time(NULL));
    int randomNumber = (rand() % 3);

    do
    {
        cout << "Ingrese el nombre de usuario: ";
        cin >> userName;
    } while (!userName.empty() && userName.length() < 7);

    userName.insert(0, "1#");
    
    cout << "Nombre de usuario registrado: " << userName << "\n ";

    int userNumber = (rand() % 3) + 1;

    if(userNumber == 0){
        userInput = "piedra";
    } else if(userNumber == 1){
        userInput = "papel";
    } else if(userNumber == 2){
        userInput = "tijeras";
    } else {
        userInput = "bomba";
    }
    




    switch (randomNumber)
    {
    case 0:
        computerInput = "piedra";
     
        break;
    case 1:
        computerInput = "papel";
       
        break;
    case 2:
        computerInput = "tijeras";
        break;
    
    default:
        cout << "Error! \n";
        break;
    }


    if(userInput == computerInput){
        prompt = "Empate!!";
    } else if((userInput == "piedra"  && computerInput == "tijeras") || (userInput == "tijeras" && computerInput == "papel") || (userInput == "papel" && computerInput == "piedra") || userInput == "bomba"){
        prompt = userName + " gano la partida";
    } else{
        prompt = "La computadora gana! ";
    }

    

    cout << "Jugaste: " << userInput << endl;   
    cout << "La computadora: " << computerInput << endl;

    cout << "El ganador de la partida: " << prompt << endl;

    
}