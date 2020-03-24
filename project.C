
{

	gStyle->SetOptFit(0);//turn off the fitting results
	gStyle->SetOptStat("");//remove statistic results
	//remove margin
	gStyle->SetPadLeftMargin(0.085);
	gStyle->SetPadRightMargin(0.001);
	gStyle->SetPadTopMargin(0.02);
	//get their font, size the same
	gStyle->SetTextFont(132);
	gStyle->SetLabelFont(132,"XY");
	gStyle->SetTitleFont(132,"XY");
	gStyle->SetLegendFont(132);
	gStyle->SetLabelSize(0.05,"XY");
	gStyle->SetTitleSize(0.05,"XY");
	gStyle->SetTitleOffset(0.95,"X");
	gStyle->SetTitleOffset(0.85,"Y");


	TGraphErrors e("electron.txt");
	e.SetMarkerColor(kBlack); 
	e.SetMarkerStyle(4); 
	e.SetMarkerSize(1.0);
	e.SetTitle(";Momentum [GeV];dE/dx[keV/cm]");
	e.GetYaxis()->SetRangeUser(0,30);
	e.Draw("AP"); 

	TGraphErrors m("muon.txt");
	m.SetMarkerColor(kRed);
	m.SetMarkerStyle(20);
	m.SetMarkerSize(1.0);
	m.Draw("P");

   TGraphErrors pi("pion.txt");
	pi.SetMarkerColor(kBlue);
	pi.SetMarkerStyle(10);
	pi.SetMarkerSize(1.0);
	pi.Draw("P");

	TGraphErrors k("kaon.txt");
	k.SetMarkerColor(kGreen);
	k.SetMarkerStyle(15);
	k.SetMarkerSize(1.0);
	k.Draw("P");

   TGraphErrors p("proton.txt");
	p.SetMarkerColor(kOrange);
	p.SetMarkerStyle(15);
	p.SetMarkerSize(1.0);
	p.Draw("P");
	
/*	//get them fit 
	TF1 *fptop = new TF1("fptop","pol0",600,2700);
	fptop->SetLineColor(kRed);
	fptop->SetLineWidth(1);
	fptop->SetLineStyle(10); //make linestyle different
	e.Fit(fptop);

	TF1 *fpbot = new TF1("fpbot","pol0",600,2700);
	fpbot->SetLineColor(kRed);
	fpbot->SetLineWidth(1);
	fpbot->SetLineStyle(3);
	m.Fit(fpbot);

	TF1 *fpsum = new TF1("fpsum","pol0",600,2700);
	fpsum->SetLineColor(kRed);
	fpsum->SetLineWidth(1);
	gs.Fit(fpsum);

	double x2= fptop->GetChisquare (); //(1)get information
	double x3= fpsum->GetChisquare ();
	double x4= fpbot->GetChisquare ();
	
	int nt= fptop->GetNDF ();
	int nb= fpbot->GetNDF ();
	int ns= fpsum->GetNDF ();
	
	TLatex latex;
	//latex.SetTextSize(0.025);
	//latex.SetTextAlign(13);  //align at top
	latex.DrawLatex(680,16,Form("#chi^{2}/ndf=%.2f/%d",x2,nt)); //(2)put information on the plot
	latex.DrawLatex(680,24,Form("#chi^{2}/ndf=%.2f/%d",x3,ns));
	latex.DrawLatex(680,9,Form("#chi^{2}/ndf=%.2f/%d",x4,nb)); 

	double meantop= fptop->GetParameter(0);
	double meansum= fpsum->GetParameter(0);
	double meanbot= fpbot->GetParameter(0);
	double e1= fptop->GetParError(0);
	double e2= fpbot->GetParError(0);
	double e3= fpsum->GetParError(0);
	
	
	latex.DrawLatex(1500,16,Form("mean(top PMT): %.2f #pm %.2f",meantop, e1));
	latex.DrawLatex(1500,9,Form("mean(bottom PMT): %.2f #pm %.2f",meanbot, e2)); 
   latex.DrawLatex(1500,24,Form("mean(both PMT): %.2f #pm %.2f",meansum, e3));
	
	latex.DrawLatex(680,12,Form("%.1f #pm %.1f, COHERENT, CsI(Na)", 13.5,0.1));
   latex.DrawLatex(680,19,Form("%.1f #pm %.1f (arXiv:1608.06278), CsI", 20.4,0.8));
	latex.DrawLatex(680,4, "6~10, DAMA, NaI(Tl)");
	latex.DrawLatex(1500,4,"3.5~15.5, COSINE, NaI(Tl)");
   
	TLine line;
	line.DrawLine(500,20.39,2800,20.39)->SetLineStyle(4);
   line.DrawLine(500,13.5,2800,13.5)->SetLineStyle(2);
*/
}
