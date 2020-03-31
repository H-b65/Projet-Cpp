#ifndef GRAPH_h
#define GRAPH_h
#include <list> 
#include <iterator> 
using namespace std;
//Voila notre clsse Graph
class Graph
{
	
	protected:
		
    int ns;     //nombre de sommet
    list<int> *adj; //list d'adjacents
    list<int> sommet;    
	
    public:
    	
    	Graph(int);   //Constricteur de Graph
    	 
        ~Graph();    //Destructeur de Graph
        
        void Add_Sommet(int);    //Méthode d'ajouter un sommet
    	
    	void Add_Arete(int , int);   //Méthode d'ajouter une arete  (Graphe non orienté)
    	
    	void Add_Arc(int , int);   //Méthode d'ajouter un arc  (Graphe orienté)
	
	void Delete_Arc(int , int);   //la supprission d'un arc  (Graphe orienté)
	
	void Delete_Arete(int , int);   //la supprission d'une arete  (Graphe non orienté)
    	
    	void Affiche_Graph(); 	//Méthode d'affichage du graphe 
       
};




#endif
