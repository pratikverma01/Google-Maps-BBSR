#include "Graph.h"

Graph initializer()
{
    std::vector<Place> places = {
    Place(0, "Acharya Vihar"),
    Place(1, "AG Square"),
    Place(2, "AIIMS"),
    Place(3, "AMRI Hospital"),
    Place(4, "Apollo Hospital"),
    Place(5, "Baramunda"),
    Place(6, "Biju Pattnaik Airport"),
    Place(7, "C.V. Raman Global University"),
    Place(8, "CARE Hospital"),
    Place(9, "Collage of Engineering & Technology"),
    Place(10, "Centurion University of Technology and Management"),
    Place(11, "Fire Station"),
    Place(12, "Gandhi Institute of Technological Advancement"),
    Place(13, "Gohiria Square"),
    Place(14, "Hi-Tech"),
    Place(15, "International Institute of Information Technology"),
    Place(16, "Indian Institute of Technology"),
    Place(17, "IMMT"),
    Place(18, "Infocity Square"),
    Place(19, "ITER"),
    Place(20, "Jagamara"),
    Place(21, "Jaydev Vihar"),
    Place(22, "Kalinga Hospital Square"),
    Place(23, "Kalpana Square"),
    Place(24, "Khandagiri"),
    Place(25, "Kalinga Institute of Medical Sciences"),
    Place(26, "Kalinga Institute of Industrial Technology"),
    Place(27, "KIIT Square"),
    Place(28, "Lingaraj Mandir"),
    Place(29, "Lingraj Station"),
    Place(30, "Master Canteen"),
    Place(31, "OUAT Square"),
    Place(32, "Patia Square"),
    Place(33, "Rajmahal Square"),
    Place(34, "Rasulgarh"),
    Place(35, "Silicon Institute of Technology"),
    Place(36, "SUM Hospital"),
    Place(37, "Tomando"),
    Place(38, "Trident Academy Of Technology"),
    Place(39, "Utkal Hospital"),
    Place(40, "Vani Vihar")
};

    //* Initialize the graph with the initial values from the Bhubaneswar Map
    Graph Bhubaneswar(41, places);

    //* Initialize the places with the numeric values from the map
    Bhubaneswar.setPlace(0, Place(0, "Acharya Vihar"));
    Bhubaneswar.setPlace(1, Place(1, "AG Square"));
    Bhubaneswar.setPlace(2, Place(2, "AIIMS"));
    Bhubaneswar.setPlace(3, Place(3, "AMRI Hospital"));
    Bhubaneswar.setPlace(4, Place(4, "Apollo Hospital"));
    Bhubaneswar.setPlace(5, Place(5, "Baramunda"));
    Bhubaneswar.setPlace(6, Place(6, "Biju Pattnaik Airport"));
    Bhubaneswar.setPlace(7, Place(7, "C.V. Raman Global University"));
    Bhubaneswar.setPlace(8, Place(8, "CARE Hospital"));
    Bhubaneswar.setPlace(9, Place(9, "Collage of Engineering & Technology"));
    Bhubaneswar.setPlace(10, Place(10, "Centurion University of Technology and Management"));
    Bhubaneswar.setPlace(11, Place(11, "Fire Station"));
    Bhubaneswar.setPlace(12, Place(12, "Gandhi Institute of Technological Advancement "));
    Bhubaneswar.setPlace(13, Place(13, "Gohiria Square"));
    Bhubaneswar.setPlace(14, Place(14, "Hi-Tech"));
    Bhubaneswar.setPlace(15, Place(15, "International Institute of Information Technology"));
    Bhubaneswar.setPlace(16, Place(16, "Indian Institute of Technology"));
    Bhubaneswar.setPlace(17, Place(17, "IMMT"));
    Bhubaneswar.setPlace(18, Place(18, "Infocity Square"));
    Bhubaneswar.setPlace(19, Place(19, "ITER"));
    Bhubaneswar.setPlace(20, Place(20, "Jagamara"));
    Bhubaneswar.setPlace(21, Place(21, "Jaydev Vihar"));
    Bhubaneswar.setPlace(22, Place(22, "Kalinga Hospital Square"));
    Bhubaneswar.setPlace(23, Place(23, "Kalpana Square"));
    Bhubaneswar.setPlace(24, Place(24, "Khandagiri"));
    Bhubaneswar.setPlace(25, Place(25, "Kalinga Institute of Medical Sciences"));
    Bhubaneswar.setPlace(26, Place(26, "Kalinga Institute of Industrial Technology"));
    Bhubaneswar.setPlace(27, Place(27, "KIIT Square"));
    Bhubaneswar.setPlace(28, Place(28, "Lingaraj Mandir"));
    Bhubaneswar.setPlace(29, Place(29, "Lingraj  Station"));
    Bhubaneswar.setPlace(30, Place(30, "Master Canteen"));
    Bhubaneswar.setPlace(31, Place(31, "OUAT Square"));
    Bhubaneswar.setPlace(32, Place(32, "Patia Square"));
    Bhubaneswar.setPlace(33, Place(33, "Rajmahal Square"));
    Bhubaneswar.setPlace(34, Place(34, "Rasulgarh"));
    Bhubaneswar.setPlace(35, Place(35, "Silicon Institute of Technology"));
    Bhubaneswar.setPlace(36, Place(36, "SUM Hospital"));
    Bhubaneswar.setPlace(37, Place(37, "Tomando"));
    Bhubaneswar.setPlace(38, Place(38, "Trident Academy Of Technology"));
    Bhubaneswar.setPlace(39, Place(39, "Utkal Hospital"));
    Bhubaneswar.setPlace(40, Place(40, "Vani Vihar"));

    //*
    Bhubaneswar.addEdge(Edge(0, 1, 4.6));
    Bhubaneswar.addEdge(Edge(1, 0, 4.6));

    Bhubaneswar.addEdge(Edge(0, 4, 2.2));
    Bhubaneswar.addEdge(Edge(4, 0, 2.2));

    Bhubaneswar.addEdge(Edge(0, 17, 1.1));
    Bhubaneswar.addEdge(Edge(17, 0, 1.1));

    Bhubaneswar.addEdge(Edge(0, 30, 4.4));
    Bhubaneswar.addEdge(Edge(30, 0, 4.4));

    Bhubaneswar.addEdge(Edge(0, 40, 2.1));
    Bhubaneswar.addEdge(Edge(40, 0, 2.1));

    Bhubaneswar.addEdge(Edge(1, 6, 2.2));
    Bhubaneswar.addEdge(Edge(6, 1, 2.2));

    Bhubaneswar.addEdge(Edge(1, 11, 4.9));
    Bhubaneswar.addEdge(Edge(11, 1, 4.9));

    Bhubaneswar.addEdge(Edge(1, 21, 5));
    Bhubaneswar.addEdge(Edge(21, 1, 5));

    Bhubaneswar.addEdge(Edge(1, 31, 2.8));
    Bhubaneswar.addEdge(Edge(31, 1, 2.8));

    Bhubaneswar.addEdge(Edge(1, 33, 0.9));
    Bhubaneswar.addEdge(Edge(33, 1, 0.9));

    Bhubaneswar.addEdge(Edge(2, 24, 4.5));
    Bhubaneswar.addEdge(Edge(24, 2, 4.5));

    Bhubaneswar.addEdge(Edge(3, 9, 3.3));
    Bhubaneswar.addEdge(Edge(9, 3, 3.3));

    Bhubaneswar.addEdge(Edge(3, 24, 2.4));
    Bhubaneswar.addEdge(Edge(24, 3, 2.4));

    Bhubaneswar.addEdge(Edge(4, 22, 3.7));
    Bhubaneswar.addEdge(Edge(22, 4, 3.7));

    Bhubaneswar.addEdge(Edge(5, 11, 1.5));
    Bhubaneswar.addEdge(Edge(11, 5, 1.5));

    Bhubaneswar.addEdge(Edge(5, 24, 1.9));
    Bhubaneswar.addEdge(Edge(24, 5, 1.9));

    Bhubaneswar.addEdge(Edge(6, 28, 4.2));
    Bhubaneswar.addEdge(Edge(28, 6, 4.2));

    Bhubaneswar.addEdge(Edge(6, 31, 3.2));
    Bhubaneswar.addEdge(Edge(31, 6, 3.2));

    Bhubaneswar.addEdge(Edge(7, 13, 1));
    Bhubaneswar.addEdge(Edge(13, 7, 1));

    Bhubaneswar.addEdge(Edge(8, 22, 0.9));
    Bhubaneswar.addEdge(Edge(22, 8, 0.9));

    Bhubaneswar.addEdge(Edge(8, 39, 3.6));
    Bhubaneswar.addEdge(Edge(39, 8, 3.6));

    Bhubaneswar.addEdge(Edge(10, 13, 14));
    Bhubaneswar.addEdge(Edge(13, 10, 14));

    Bhubaneswar.addEdge(Edge(11, 21, 5));
    Bhubaneswar.addEdge(Edge(21, 11, 5));

    Bhubaneswar.addEdge(Edge(11, 31, 2.6));
    Bhubaneswar.addEdge(Edge(31, 11, 2.6));

    Bhubaneswar.addEdge(Edge(11, 36, 4.3));
    Bhubaneswar.addEdge(Edge(36, 11, 4.3));

    Bhubaneswar.addEdge(Edge(12, 13, 1));
    Bhubaneswar.addEdge(Edge(13, 12, 1));

    Bhubaneswar.addEdge(Edge(13, 37, 2.5));
    Bhubaneswar.addEdge(Edge(37, 13, 2.5));

    Bhubaneswar.addEdge(Edge(14, 34, 2.4));
    Bhubaneswar.addEdge(Edge(34, 14, 2.4));

    Bhubaneswar.addEdge(Edge(15, 36, 4.4));
    Bhubaneswar.addEdge(Edge(36, 15, 4.4));

    Bhubaneswar.addEdge(Edge(16, 13, 18.2));
    Bhubaneswar.addEdge(Edge(13, 16, 18.2));

    Bhubaneswar.addEdge(Edge(17, 21, 2.9));
    Bhubaneswar.addEdge(Edge(21, 17, 2.9));

    Bhubaneswar.addEdge(Edge(18, 35, 1.2));
    Bhubaneswar.addEdge(Edge(35, 18, 1.2));

    Bhubaneswar.addEdge(Edge(18, 38, 0.4));
    Bhubaneswar.addEdge(Edge(38, 18, 0.4));

    Bhubaneswar.addEdge(Edge(19, 20, 1.1));
    Bhubaneswar.addEdge(Edge(20, 19, 1.1));

    Bhubaneswar.addEdge(Edge(19, 29, 5));
    Bhubaneswar.addEdge(Edge(29, 19, 5));

    Bhubaneswar.addEdge(Edge(20, 31, 3.2));
    Bhubaneswar.addEdge(Edge(31, 20, 3.2));

    Bhubaneswar.addEdge(Edge(21, 25, 2.7));
    Bhubaneswar.addEdge(Edge(25, 21, 2.7));

    Bhubaneswar.addEdge(Edge(22, 32, 3.2));
    Bhubaneswar.addEdge(Edge(32, 22, 3.2));

    Bhubaneswar.addEdge(Edge(23, 28, 35));
    Bhubaneswar.addEdge(Edge(28, 23, 35));

    Bhubaneswar.addEdge(Edge(23, 33, 1.4));
    Bhubaneswar.addEdge(Edge(33, 23, 1.4));

    Bhubaneswar.addEdge(Edge(24, 37, 7.2));
    Bhubaneswar.addEdge(Edge(37, 24, 7.2));

    Bhubaneswar.addEdge(Edge(25, 26, 1));
    Bhubaneswar.addEdge(Edge(26, 25, 1));

    Bhubaneswar.addEdge(Edge(25, 35, 2));
    Bhubaneswar.addEdge(Edge(35, 25, 2));

    Bhubaneswar.addEdge(Edge(26, 27, 1));
    Bhubaneswar.addEdge(Edge(27, 26, 1));

    Bhubaneswar.addEdge(Edge(27, 32, 2.3));
    Bhubaneswar.addEdge(Edge(32, 27, 2.3));

    Bhubaneswar.addEdge(Edge(29, 33, 4.7));
    Bhubaneswar.addEdge(Edge(33, 29, 4.7));

    Bhubaneswar.addEdge(Edge(30, 33, 2.7));
    Bhubaneswar.addEdge(Edge(33, 30, 2.7));

    Bhubaneswar.addEdge(Edge(30, 40, 4.3));
    Bhubaneswar.addEdge(Edge(40, 30, 4.3));

    Bhubaneswar.addEdge(Edge(34, 40, 5.1));
    Bhubaneswar.addEdge(Edge(40, 34, 5.1));

    Bhubaneswar.addEdge(Edge(38, 39, 2.7));
    Bhubaneswar.addEdge(Edge(39, 38, 2.7));

    return Bhubaneswar;
}