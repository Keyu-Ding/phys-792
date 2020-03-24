#include <iostream>
#include <TRandom3.h>
#include <TH1F.h>
#include <TCanvas.h>

int main ()
{
	TH1F h("h","the wealth people get;money[billion];",50,0,10);
	TRandom generator(0);
	
	for(int i=0;i<100;i++) h.Fill(generator.Exp(1.5));
	
	TCanvas can;
	h.Fit("expo");
	can.Print("Exp.jpg");
}
