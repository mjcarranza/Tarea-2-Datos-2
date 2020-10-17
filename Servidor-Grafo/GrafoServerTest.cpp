//
// Created by mario on 8/10/20.
// Testing Grafo`s code:
//
/*
 * Includes
 */
#include "Grafo.h"
#include "main.cpp"
#include <gtest/gtest.h>

Graph G;

TEST(GrafoTests, EmptyGraphTest){

    EXPECT_TRUE(G.empty());
}
TEST(GarfoTests, InsertVertexTest){

    string Nombre = "NodeA";

    EXPECT_EQ(Nombre,G.insert_vertice(Nombre));
}
TEST(GarfoTests, InsertAristTest){
    Vertice *Origen;
    Vertice *Destino;
    string NombreA = "NodoA";
    Origen->nombre = NombreA;
    string NombreB = "NodoB";
    Destino->nombre = NombreB;
    int Value = 15;

    G.insert_vertice(NombreA);
    G.insert_vertice(NombreB);

    EXPECT_EQ((Origen->nombre, Destino->nombre, std::to_string(Value)), G.insert_arista(Origen,Destino,Value));
}
TEST(GarfoTests, GetVertexTest){
    Vertice *vrtx;
    string Name = "NodeAA";

    G.insert_vertice(Name);

    EXPECT_EQ(vrtx->nombre, G.GetVertice(Name));
}
TEST(GrafoTests, FloydWarshallTest){
    int Matrix[9][9] = {{0},{4},{9},
                        {4},{0},{8},//407
                        {7},{3},{0}};
    int counting = 0;
    
    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            counting += Matrix[i][j];
        }
    }

    EXPECT_EQ(counting,G.floyd(Matrix,9,9));
}