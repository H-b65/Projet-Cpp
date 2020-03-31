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
        
        void Add_Sommet(int);    //M�thode d'ajouter un sommet
    	
    	void Add_Arete(int , int);   //M�thode d'ajouter une arete  (Graphe non orient�)
    	
    	void Add_Arc(int , int);   //M�thode d'ajouter un arc  (Graphe orient�)
	
    	void Affiche_Graph(); 	//M�thode d'affichage du graphe 
       
};




#endif
