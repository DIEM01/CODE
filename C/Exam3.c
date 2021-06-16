#include <windows.h>
#include <locale.h>
#include <stdio.h>
#include <math.h>
int main (){
	system ("color 8F"); setlocale (LC_ALL , "spanish");
	float mate, ingles , espa, psico, hist, fis, quim, bio, dibu, salu, promedio, apro=0, pro ;
	int cuenta= 0, cuenta2 = 0, cuenta3= 0;

	
printf ("Dame la calificacion de Matematicas \n"); scanf ("%f",& mate);
printf ("Dame la calificacion de ingles \n");scanf ("%f",& ingles);
printf ("Dame la calificacion de español \n");scanf ("%f",& espa);
printf ("Dame la calificacion de Psicologia\n" );scanf ("%f",&psico );
printf ("Dame la calificacion de Historia \n");scanf ("%f",& hist);
printf ("Dame la calificacion de Fisica \n");scanf ("%f",& fis);
printf ("Dame la calificacion de Quimica\n");scanf ("%f",& quim);
printf ("Dame la calificacion de Biologia \n");scanf ("%f",& bio);
printf ("Dame la calificacion de Dibujo\n");scanf ("%f",& dibu);
printf ("Dame la calificacion de salud \n");scanf ("%f",& salu);
if(mate >= ingles && mate >= espa && mate >= psico && mate >= hist && mate >= quim && mate >= bio && mate >= dibu && mate >= salu)
{ printf ("Matematicas es la mayor \n");}
if(espa >= ingles && espa >= mate && espa >= psico && espa >= hist && espa >= quim && espa >= bio && espa >=dibu && espa >= salu)
{ printf ("Español es la mayor\n ");}
if(ingles >= espa && ingles >= mate && ingles >= psico && ingles>= hist && ingles >= quim && ingles >= bio && ingles >=dibu && ingles >= salu)
{ printf ("Ingles es la mayor \n");}
if(psico >= espa && psico>= mate && psico >= ingles && psico>= hist && psico >= quim && psico >= bio && psico>=dibu && psico>= salu)
{ printf ("Psicologia es la mayor \n");}
if(hist >= espa && hist>=mate && hist>= ingles && hist>= psico && hist >= quim &&hist >=bio && hist>=dibu && hist>= salu)
{ printf ("Historia es la mayor \n");}
if(fis>=espa && fis>= mate && fis>= ingles && fis>= psico && fis >= quim &&fis >= bio && fis>=dibu && fis>= salu)
{ printf ("Fisica es la mayor\n ");}
if(quim>= espa && quim>= mate && quim>= ingles && quim>= psico && quim >= fis &&quim>= bio && quim>=dibu && quim>= salu)
{ printf ("Quimica es la mayor\n ");}
if(bio>= espa && bio>= mate && bio>= ingles && bio>= psico && bio >= fis &&bio>= quim && bio>=dibu && bio>= salu)
{ printf ("Biologia es la mayor \n");}
if(dibu>= espa && dibu>= mate && dibu>= ingles && dibu>= psico && dibu >= fis &&dibu>= quim && dibu>=bio && dibu>= salu)
{ printf ("Dibujo es la mayor \n");}
if(salu>= espa && salu>= mate && salu>= ingles && salu>= psico && salu>= fis &&salu>= quim && salu>=bio && salu>= dibu)
{ printf ("Salud es la mayor\n ");}



if(mate <= ingles && mate <= espa && mate <= psico && mate <= hist && mate <= quim && mate <= bio && mate <= dibu && mate <= salu)
{ printf ("Matematicas es la menor \n");}
if(espa <=ingles && espa <= mate && espa <= psico && espa <= hist && espa <= quim && espa <= bio && espa <=dibu && espa <= salu)
{ printf ("Español es la menor\n ");}
if(ingles <= espa && ingles <= mate && ingles <=psico && ingles<= hist && ingles <= quim && ingles <= bio && ingles <=dibu && ingles <= salu)
{ printf ("Ingles es la menor\n");}
if(psico <= espa && psico<= mate && psico <=ingles && psico<= hist && psico <= quim && psico <= bio && psico<=dibu && psico<= salu)
{ printf ("Psicologia es la menor \n");}
if(hist <= espa && hist<= mate && hist<= ingles && hist<= psico && hist <=quim &&hist <= bio && hist<=dibu && hist<= salu)
{ printf ("Historia es la menor \n");}
if(fis<= espa && fis<= mate && fis<= ingles && fis<= psico && fis <= quim &&fis <= bio && fis<=dibu && fis<= salu)
{ printf ("Fisica es la menor \n");}
if(quim<= espa && quim<= mate && quim<= ingles && quim<= psico && quim <= fis &&quim<= bio && quim<=dibu && quim<= salu)
{ printf ("Quimica es la menor \n");}
if(bio<= espa && bio<= mate && bio<=ingles && bio<= psico && bio <= fis &&bio<= quim && bio<=dibu && bio<= salu)
{ printf ("Biologia es la menor\n");}
if(dibu<= espa && dibu<= mate && dibu<= ingles && dibu<= psico && dibu <= fis &&dibu<= quim && dibu<=bio && dibu<= salu)
{ printf ("Dibujo es la menor \n");}
if(salu<= espa && salu<=mate && salu<= ingles && salu<= psico && salu<=fis &&salu<=quim && salu<=bio && salu<= dibu)
{ printf ("Salud es la menor\n");}



promedio = (mate+ ingles + espa+ psico+ hist +fis+ quim+ bio+ dibu+ salu)/ 10;
printf ("El promedio es : %.2f\n", promedio);



if (mate <= 5.0)
{ cuenta =  cuenta +1;}
if (ingles <= 5.0)
{ cuenta = cuenta +1;}
if (espa <= 5.0)
{ cuenta = cuenta +1;}
if (psico <= 5.0)
{ cuenta = cuenta +1;}
if (hist <= 5.0)
{ cuenta = cuenta +1;}
if (fis <= 5.0)
{ cuenta =cuenta + 1;}
if (quim <= 5.0)
{ cuenta = cuenta +1;}
if (bio <= 5.0)
{ cuenta = cuenta +1;}
if (dibu <= 5.0)
{ cuenta = cuenta +1;}
if (salu <= 5.0)
{ cuenta = cuenta +1;}
printf ("El número de materias reprobadas es : %i \n", cuenta);




if (mate >= 6.0)
{ cuenta2 =  cuenta2 +1;}
if (ingles >= 6.0)
{ cuenta2 = cuenta2 +1;}
if (espa >= 6.0)
{ cuenta2 = cuenta2 +1;}
if (psico >= 6.0)
{ cuenta2 = cuenta2 +1;}
if (hist >= 6.0)
{ cuenta2 = cuenta2 +1;}
if (fis >= 6.0)
{ cuenta2 =cuenta2 + 1;}
if (quim >= 6.0)
{ cuenta2 = cuenta2 +1;}
if (bio >= 6.0)
{ cuenta2 = cuenta2 +1;}
if (dibu >= 6.0)
{ cuenta2 = cuenta2 +1;}
if (salu >= 6.0)
{ cuenta2 = cuenta2 +1;}
printf ("El número de materias aprobadas es : %i \n", cuenta2);


if (mate >= 6.0)
{ apro = apro + mate;
cuenta3 = cuenta3 +1;}
if (ingles >= 6.0)
{ apro = apro + ingles;
cuenta3 = cuenta3 +1;}
if (espa >= 6.0)
{ apro = apro + espa;
cuenta3 = cuenta3 +1;}
if (psico >= 6.0)
{ apro = apro +psico;
cuenta3 = cuenta3 +1;}
if (hist >= 6.0)
{ apro = apro +hist;
cuenta3 = cuenta3 +1;}
if (fis >= 6.0)
{ apro = apro + fis;
cuenta3 = cuenta3 +1;}
if (quim >= 6.0)
{ apro = apro +quim;
cuenta3 = cuenta3 +1;}
if (bio >= 6.0)
{ apro = apro +bio;
cuenta3 = cuenta3 +1;}
if (dibu >= 6.0)
{ apro = apro +dibu;
cuenta3 = cuenta3 +1;}
if (salu >= 6.0)
{ apro = apro +salu;
cuenta3 = cuenta3 +1;}

pro = apro / cuenta3 ;
printf ("El primedio de las calificaciones aprobadas es : %.2f\n",pro);

return 0 ;
}
