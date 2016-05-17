#include <stdio.h>
#include <stdlib.h>

int main()
{
     int choixmenu,h,m,s;
     float tc,tf,dkm,dm,vl,vg;
     char choix;
     do
     {
         printf("Que voulez vous convertir ?\n");
         printf(" Taper 1 pour: une horaire en duree en secondes.\n");
         printf(" Taper 2 pour: une duree en secondes en horaire.\n");
         printf(" Taper 3 pour: une temperature en degre C, en degre Farenheit.\n");
         printf(" Taper 4 pour: une temperature en degre Farenheit, en degre C.\n");
         printf(" Taper 5 pour: une distance en kms, en miles.\n");
         printf(" Taper 6 pour: une distance en miles, en kilometres.\n");
         printf(" Taper 7 pour: un volume en litres, en gallons.\n");
         printf(" Taper 8 pour: un volume gallons, en litres.\n");
         printf(" Taper 9 pour: mettre fin au programme.\n");
         printf(" Entrer votre choix :\n");
         scanf("%d", &choixmenu);
         fflush(stdin);
         switch (choixmenu)
         {
             case 1:
                 printf("Saisir heures\n") ;
                 scanf("%d", &h);
                 if (h<0)
                 {
                    printf("erreur, veuillez recommencer\n");
                    break;
                 }
                 do {
                    printf("Saisir minutes\n");
                    scanf("%d", &m);}
                while(m<0 || m>60);

                   /* printf("erreur, veuillez recommencer\n");
                    printf("Veuillez resaisir les minutes");
                    scanf("%d", &m);
                    break; */

                 printf("Saisir secondes\n");
                 scanf("%d", &s);
                 if (s<0 || s>60)
                 {
                    printf("Erreur, veuillez recommencer\n");
                    break;
                 }
                 printf("%d h, %d min, %d sec = %d secondes\n", h, m, s, h*60*60+m*60+s);
                 break;

             case 2:
                 printf("Saisir secondes\n");
                 scanf("%d", &s);
                 printf("%d secondes = %d h, %d min, %d secondes\n", s, s/60/60, s%3600/60, s-(3600*s/60/60)+(60*s%3600/60));
                 break;

             case 3:
                printf("saisir la temperature en degre C\n");
                scanf("%f", &tc);
                printf("%1.2f degre C = %1.2f degre F\n", tc, 1.8*tc+32);
                break;

             case 4:
                printf("saisir la temperature en degre F\n");
                scanf("%f",&tf);
                printf("%1.2f degre F = %1.2f degre C\n", tf, (5.0/9.0)*tf-160.0/9.0);
                break;

             case 5:
                printf("saisir une distance en km\n");
                scanf("%f", &dkm);
                printf("%1.2f km = %1.2f miles\n", dkm, dkm*0.6214);
                break;

             case 6:
                printf("saisir une distance en milles\n");
                scanf("%f", &dm);
                printf("%1.2f mi = %1.2f km\n",dm, dm*1.609344);
                break;

             case 7:
                printf("saisir un volume en litres\n");
                scanf("%f", &vl);
                printf("%1.2f L = %1.2f G\n", vl, vl*0.264172052);
                break;

             case 8:
                printf("saisir un volume en gallons\n");
                scanf("%f", &vg);
                printf("%1.2f G = %1.2f L\n", vg, vg*3.78541178);
                break;
             case 9:
                printf("le programme est fini.\n");
                break;
             default:
                printf("Erreur veuillez recommencer.\n");
         }
     }   while (choixmenu != 9);
    return 0;
}
