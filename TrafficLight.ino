// Programa : Pisca Pisca pisca
// Autor : GILMAR

//class Environment {
//  public:
//
//    Pins() {
//      pin = {
//        {"LED",11},
//      };
//    }
//};

//Environment env;

void setup() {
  //Define a porta do led como saida
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  //printf("Hello, World!\n");
}

void loop(){
  //Acende o led
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  //printf("HIGH!\n");

  //Aguarda intervalo de tempo em milissegundos
  delay(500);

  //Apaga o led
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  //printf("LOW!\n");

  //Aguarda intervalo de tempo em milissegundos
  delay(500);
}
