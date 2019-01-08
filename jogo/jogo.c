    // Inclui o cabeçalho da bibilioteca Allegro 5
    #include <allegro5/allegro.h>

    // Inclui o cabeçalho do add-on para uso de imagens
    #include <allegro5/allegro_image.h>

    #include <stdio.h>




    //variável global boneco
    int boneco=0;
    int round =0;
    int tentativas=-1;
    int main(void)
    {





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

         /*
                         ATENÇÂO
          deve-se inserir dois blocos vazios para ocupar os espaços vazios.
        // al_draw_bitmap(imagem23, 300, 475, 0);
        // al_draw_bitmap(imagem24, 300, 525, 0);

        */






        // Atualiza a tela
        al_flip_display();


        }

        //ffim função

        //vai definir as rodadas
        while(round<=5){

     tela();
     break;
        }

        // Segura a execução por 10 segundos
        al_rest(3.0);

        // Finaliza a janela
        al_destroy_display(janela);

        return 0;
    }
