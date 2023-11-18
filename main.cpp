#include <iostream>
#include "Bhubaneswar.h"
#include <cstdlib> // for system("cls")

using namespace std;

void displayPlaces(const Graph& Bhubaneswar) {
    // Display the list of places with their IDs
    cout << "\n\t\t*****************************\t\t";
    cout << "\n\t\t\tList of Places:\n " << "\t\t*****************************\t\t\n" << endl;
    for (int i = 0; i <= 40; ++i) {
        cout << "\t<> Place " << i << ": " << Bhubaneswar.getPlaceName(i) << endl;
    }
}


int main() {
    Graph Bhubaneswar = initializer();
    int source, destination;

    while (true) {
        system("cls");
        cout << "\n\tWelcome to Traffic Optimization using Dijkstra Algorithm \n";

        displayPlaces(Bhubaneswar); // Display the list of places

        // Input source and destination place IDs
        cout << "\n\tEnter the source place ID (0-40): ";
        cin >> source;

        if (source < 0 || source > 40) {
            cout << "Invalid source place ID. Please enter a valid ID between 0 and 40." << endl;
            continue;
        }

        cout << "\n\tEnter the destination place ID (0-40): ";
        cin >> destination;

        if (destination < 0 || destination > 40) {
            cout << "Invalid destination place ID. Please enter a valid ID between 0 and 40." << endl;
            continue;
        }

        // Find the shortest distance between the chosen places
        float shortestDistance = Bhubaneswar.dijkstra(source, destination);

        if (shortestDistance == INT_MAX) {
            cout << "No path found between Place " << source << " and Place " << destination << "." << endl;
        } else {
            cout << "\n\tShortest distance between Place " << source << " and Place " << destination << " (in Km): " << shortestDistance << endl;
        }

        char choice;
        cout << "\n\tDo you want to find another path? (y/n): ";
        cin >> choice;

        if (choice != 'y' && choice != 'Y') {
            cout << "\n\t\tThank you for using our services!!";
            break;
        }
    }

    return 0;
}