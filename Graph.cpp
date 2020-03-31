#include "Graph.h"
#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std;

Graph::Graph(int nbs){   //Constructeur de Graph
	this->ns=nbs;
	adj= new list<int>[ns];
    
    
}
	Graph::~Graph(){ 
	delete [] adj; 
	
	}

void Graph::Add_Sommet(int nws){
	
	sommet.push_back(nws);  //Ajouter le sommet à la fin de la liste
	
}

void Graph::Add_Arete(int src , int dst){  //Méthode d'ajouter une arete(graphe non orienté)


adj[src].push_back(dst);  //Mettre le sommet 'dst' dans la liste d'adjacent du sommet 'src'
adj[dst].push_back(src); //Mettre le sommet 'src' dans la liste d'adjacent du sommet 'dst'
                           
}

void Graph::Add_Arc(int src , int dst){
	
	adj[src].push_back(dst);  //Mettre le sommet 'dst' dans la liste d'adjacent du sommet 'src'
	
}
void Graph::Delete_Arc(int src,int dst){
adj[src].remove(dst);   //Supprimer le sommet 'dst' de la liste d'adjacence du sommet 'src'
}
Void Graph::Delete_Arete(int S1,int S2){
adj[S1].remove(S2);   //Supprimer le sommet 'S2' de la liste d'adjacence du sommet 'S1'
adj[S2].remove(S1);  ////Supprimer le sommet 'S1' de la liste d'adjacence du sommet 'S2'
}


 void Graph::Affiche_Graph() 
 {

list<int>::iterator it;
list<int>::iterator it2;

  cout<<"Pour un graphe non oriente :"<<endl;

	for (it=sommet.begin(); it!=sommet.end() ; it++)
	{
		cout << "successeurs du sommet " << *it <<": (" ;
	
	
		for (it2=adj[*it].begin(); it2!=adj[*it].end() ; it2++)
		{
			cout << *it2<<", ";
			
		}
		cout << ")" << endl;
	}
	}


