#include "Source/Graph.cpp"
#include <iostream>


using namespace std;

int main(){
	
	Graph G(8);//Graphe à 8 sommets

	G.Add_Sommet(3);//Créer des sommets
	G.Add_Sommet(2);
	G.Add_Sommet(1);
	G.Add_Sommet(4);
	G.Add_Sommet(7);
	G.Add_Sommet(6); 
	G.Add_Sommet(5); 
	cout<<"***********************************"<<endl;
	G.Add_Arete(1,2);//Créer des arrete
	G.Add_Arete(3,2);
	G.Add_Arete(3,1);
	G.Add_Arete(4,1);
	G.Add_Arete(4,3);
	G.Add_Arete(5,3);
	G.Add_Arete(6,4);
	
	G.Affiche_Graph();//Affiche le graphe
	cout<<"***********************************";
	
	return 0;
	
	
}
