    // Inclui o cabeçalho da bibilioteca Allegro 5
    #include <allegro5/allegro.h>

    // Inclui o cabeçalho do add-on para uso de imagens
    #include <allegro5/allegro_image.h>

    #include <stdio.h>




    //variável global boneco
    int boneco=0;
    int round =0;
    int tentativas=2;
    int n;













        // Variável representando a janela principal
        ALLEGRO_DISPLAY *janela = NULL;

        // Variável representando a imagem
ALLEGRO_BITMAP *imagem = NULL;
ALLEGRO_BITMAP *imagem1 = NULL;
ALLEGRO_BITMAP *imagem2 = NULL;
ALLEGRO_BITMAP *imagem3 = NULL;
ALLEGRO_BITMAP *imagem4 = NULL;
ALLEGRO_BITMAP *imagem5 = NULL;
ALLEGRO_BITMAP *imagem6 = NULL;
ALLEGRO_BITMAP *imagem7 = NULL;
ALLEGRO_BITMAP *imagem8 = NULL;
ALLEGRO_BITMAP *imagem9 = NULL;
ALLEGRO_BITMAP *imagem10 = NULL;
ALLEGRO_BITMAP *imagem11 = NULL;
ALLEGRO_BITMAP *imagem12 = NULL;
ALLEGRO_BITMAP *imagem13 = NULL;
ALLEGRO_BITMAP *imagem14 = NULL;
ALLEGRO_BITMAP *imagem15 = NULL;
ALLEGRO_BITMAP *imagem16 = NULL;
ALLEGRO_BITMAP *imagem17 = NULL;
ALLEGRO_BITMAP *imagem18 = NULL;
ALLEGRO_BITMAP *imagem19 = NULL;
ALLEGRO_BITMAP *imagem20 = NULL;
ALLEGRO_BITMAP *imagem21 = NULL;
ALLEGRO_BITMAP *imagem22 = NULL;
ALLEGRO_BITMAP *imagem23 = NULL;
ALLEGRO_BITMAP *imagem24 = NULL;
ALLEGRO_BITMAP *imagem25 = NULL;
ALLEGRO_BITMAP *imagem26 = NULL;
ALLEGRO_BITMAP *imagem27 = NULL;









 // Carrega a imagem
        //função carrega tela

 void proximo_boneco(){
        tentativas++;
        if(tentativas==0){
          imagem = al_load_bitmap("img\\BONECO_0.png");
        }else if(tentativas==1){
         imagem = al_load_bitmap("img\\BONECO_1.png");
        }else if(tentativas==2){
         imagem = al_load_bitmap("img\\BONECO_2.png");
        }else if(tentativas==3){
         imagem = al_load_bitmap("img\\BONECO_3.png");
        }else if(tentativas==4){
         imagem = al_load_bitmap("img\\BONECO_4.png");
        }else if(tentativas==5){
         imagem = al_load_bitmap("img\\BONECO_5.png");
        }

 }


        void tela(){

        // Inicializa a Allegro
        al_init();

        // Inicializa o add-on para utilização de imagens
        al_init_image_addon();

        // Configura a janela
        janela = al_create_display(800, 600);




          proximo_boneco();
        imagem1 = al_load_bitmap("img\\a.png");
         imagem2 = al_load_bitmap("img\\b.png");
        imagem3 = al_load_bitmap("img\\c.png");
        imagem4 = al_load_bitmap("img\\d.png");
         imagem5 = al_load_bitmap("img\\e.png");
        imagem6 = al_load_bitmap("img\\f.png");
        imagem7 = al_load_bitmap("img\\g.png");
         imagem8 = al_load_bitmap("img\\h.png");
        imagem9 = al_load_bitmap("img\\i.png");
        imagem10 = al_load_bitmap("img\\j.png");
         imagem11 = al_load_bitmap("img\\k.png");
        imagem12 = al_load_bitmap("img\\l.png");
        imagem13 = al_load_bitmap("img\\m.png");
         imagem14 = al_load_bitmap("img\\n.png");
        imagem15 = al_load_bitmap("img\\o.png");
        imagem16 = al_load_bitmap("img\\p.png");
         imagem17 = al_load_bitmap("img\\q.png");
        imagem18 = al_load_bitmap("img\\r.png");
        imagem19 = al_load_bitmap("img\\s.png");
         imagem20 = al_load_bitmap("img\\t.png");
        imagem21 = al_load_bitmap("img\\u.png");
        imagem22 = al_load_bitmap("img\\v.png");
        imagem23 = al_load_bitmap("img\\x.png");
        imagem24 = al_load_bitmap("img\\w.png");
        imagem25 = al_load_bitmap("img\\y.png");
         imagem26 = al_load_bitmap("img\\z.png");
         //spc é bloco vazio
          imagem27 = al_load_bitmap("img\\spc.png");




        // Desenha a imagem na tela
         al_draw_bitmap(imagem, 0, 0, 0); //boneco
         al_draw_bitmap(imagem1, 0, 375, 0);
         al_draw_bitmap(imagem2, 0, 425, 0);
         al_draw_bitmap(imagem3, 0, 475, 0);
         al_draw_bitmap(imagem4, 0, 525, 0);

         //fileira 2
         al_draw_bitmap(imagem5, 51, 375,0);
         al_draw_bitmap(imagem6, 51, 425, 0);
         al_draw_bitmap(imagem7, 51, 475, 0);
         al_draw_bitmap(imagem8, 51, 525, 0);

         //fileira 3
         al_draw_bitmap(imagem9, 101, 375,0);
         al_draw_bitmap(imagem10, 101, 425, 0);
         al_draw_bitmap(imagem11, 101, 475, 0);
         al_draw_bitmap(imagem12, 101, 525, 0);

          //fileira 4
         al_draw_bitmap(imagem13, 151, 375,0);
         al_draw_bitmap(imagem14, 151, 425, 0);
         al_draw_bitmap(imagem15, 151, 475, 0);
         al_draw_bitmap(imagem16, 151, 525, 0);

         //fileira 5
         al_draw_bitmap(imagem17, 200, 375,0);
         al_draw_bitmap(imagem18, 200, 425, 0);
         al_draw_bitmap(imagem19, 200, 475, 0);
         al_draw_bitmap(imagem20, 200, 525, 0);
         //fileira 6
         al_draw_bitmap(imagem21, 250, 375,0);
         al_draw_bitmap(imagem22, 250, 425, 0);
         al_draw_bitmap(imagem23, 250, 475, 0);
         al_draw_bitmap(imagem24, 250, 525, 0);
         //fileira 7
         al_draw_bitmap(imagem25, 300, 375,0);
         al_draw_bitmap(imagem26, 300, 425, 0);




         al_draw_bitmap(imagem27, 300, 475, 0);
        al_draw_bitmap(imagem27, 300, 525, 0);








        // Atualiza a tela
        al_flip_display();




        //ffim função

        //vai definir as rodadas


        // Segura a execução por 10 segundos
        al_rest(21.0);

        // Finaliza a janela
        al_destroy_display(janela);

 }






  int main(void)
    {




  partida();

    return 0;

    }





char palavra[20];
char forca[20];
char erros[27];



 char palavras[][157] = {"cachorro","gato", "cavalo", "elefante", "ornitorrinco","avestruz","coruja","cegonha",/*0-7*/
"abelha","anta","aranha","borboleta","besouro","barata","coelho","canguru","esquilo",/*8-16*/
"formiga","flamingo","golfinho","guaxinim","gorila","hamster","hiena","galo","lagartixa",/*17-25*/
"marreco","orangotango","pinguim","quimera","rinoceronte","salamandra","seriema","tucano","vespa",/*26-34*/
"burro","baleia","camelo","cabra","hipopotamo","iguana",/*35-40*/
"William Bonner","Zeca Camargo","Pedro Bial","Gloria Maria","George Clooney","Bono Vox","Shakira",/*41-48*/
"Madonna","Brad Pitt","Angelina Jolie","Jim Carrey","Ivete Sangalo","Dilma Rousseff","Johnny Depp",/*49-55*/
"Ziraldo","Xuxa","Adolf Hitler","Fiodor Dostoievski","John Kennedy","Juscelino Kubitschek",/*56-61*/
"Mahatma Gandhi","Benito Mussolini","Fidel Castro","Che Guevara","Nelson Mandela","Albert Einstein",/*62-67*/
"Santos Dumont","Graham Bell","Mozart", "Aristóteles","Arquimedes","Caetano Veloso","Candido Portinari",/*68-74*/
"Clarice lispector","Charles Darwin","Elvis Presley","Monteiro Lobato","Leonardo da Vinci","Carmem Miranda",/*75-80*/
"China","Estados unidos","Indonesia","Brasil","Bangladesh","Alemanha","Egito","Turquia","Reino Unido","Espanha",/*81-90*/
"Argentina","Marrocos","Iraque","Nepal","Venezuela","Gana","Taiwan","Rio de Janeiro","Sri Lanka","Costa do Marfim",/*91-100*/
"Madagascar","Chile","Equador","Camboja","Guatemala","Angola","Portugal","Hungria","Haiti","Honduras",/*101-110*/
"Israel","Hong Kong","Paraguai","Serra Leoa","Dinamarca","Eslovaquia","Noruega","Costa Rica","Inglaterra","Irlanda",/*111-120*/
"casaco","coroa","lente","travesseiro","xampu","colher","agulha","banco","brinco","sacola","balde","pente","telha", /*121-133*/
"torneira","moeda","guardanapo","chave","espelho","isqueiro","envelope","sabonete","ampulheta","grampeador","pantufa",/*134-144*/
"toalha","anzol","bexiga","cartola","prato","gaveta","gaiola","cortina","canivete","vassoura","garrafa","dentadura",/*135-156*/
"chinelo","celular","funil","lixeira"/*157-160*/};

#if defined(__MINGW32__) || defined(_MSC_VER)
#define limpar_input() fflush(stdin)
#define limpar_tela() system("cls")
#else
#define limpar_input() __fpurge(stdin)
#define limpar_tela() system("clear")
#endif

void limparBuffer(char *buf, int tamanho) {
    int i = 0;
    for (i = 0; i < tamanho; i++) {
        buf[i] = 0;
    }
}

void trimEnd(char *str) { //Tira o \n que o fgets lê junto com a variavel pra ir para a ultima linha
    int p;
    for (p = strlen(str); isspace(str[p]); p--) {
        str[p] = 0;
    }
}

int ehLetra(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

char maiuscula(char c) {
    return (c >= 'a' && c <= 'z') ? (c - 32) : c;
}

void start(void) {
    limparBuffer(palavra, 20);
    limparBuffer(forca, 20);
    limparBuffer(erros, 27);

   // printf("\nDigite uma palavra: ");
   //gera palavra aleatória
   n=sorteia();
    strcpy(palavra, palavras[n]);

    limpar_input();

    trimEnd(palavra);

    int i;
    for (i = 0; palavra[i] != 0; i++) {
        char c = palavra[i];
        forca[i] = ehLetra(c) ? '_' : c;
    }
}

int jogo(void) {
    char tentativa;
    int chances = 5;

    int letras = 0;
    int i;
    for (i = 0; palavra[i] != 0; i++) {
        if (ehLetra(palavra[i])) letras++;
    }

    while (chances > 0) {
        limpar_tela();
        printf("\nChances: %d - palavras tem %d letras\n\n", chances, letras);

        printf("%s", forca);
        if (strlen(erros) > 0) {
            printf("\nErros: %s", erros);
        }

        printf("\n\nDigite uma letra: ");
        scanf("%c", &tentativa);
        limpar_input();

        // Se o usuário digitou algo que não é letra, apenas insiste sem queimar uma chance.
        if (!ehLetra(tentativa)) continue;

        // Se o usuário digitou algo que ele já tentou antes (seja errando ou acertando), apenas insiste sem queimar uma chance.
        int jaTentou = 0;
        for (i = 0; erros[i] != 0; i++) {
            if (erros[i] == maiuscula(tentativa)) {
                jaTentou = 1;
                break;
            }
        }
        if (jaTentou) continue;
        for (i = 0; forca[i] != 0; i++) {
            if (maiuscula(forca[i]) == maiuscula(tentativa)) {
                jaTentou = 1;
                break;
            }
        }
        if (jaTentou) continue;

        int ganhou = 1;
        int achou = 0;
        for (i = 0; palavra[i] != 0; i++) {
            if (!ehLetra(palavra[i])) continue;
            if (forca[i] == '_') {
                if (maiuscula(palavra[i]) == maiuscula(tentativa)) {
                    forca[i] = palavra[i];
                    achou = 1;
                } else {
                    ganhou = 0;
                }
            }
        }

        if (ganhou) {
            return 1; // Ou seja, ganhou.
        }

        if (!achou) {
            chances--;
            proximo_boneco();
            erros[strlen(erros)] = maiuscula(tentativa);

        }
    }
    return 0; // Ou seja, perdeu.
}

void mostrarResultado(int resultado) {
    limpar_input();
    if (resultado == 0) {
        printf("\nVoce perdeu. \nA palavra era %s", palavra);
    } else {
        printf("\nParabens, voce acertou a palavra %s ", palavra);
    }
}

int partida() {
    start();

    int resultado = jogo();
    mostrarResultado(resultado);
    return 0;
}







    int sorteia(int n){

    srand(time(NULL));
     n= rand() % 156;

   return n;


    }




