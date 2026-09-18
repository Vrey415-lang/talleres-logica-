#include <iostream>
using namespace std;

int main() 
{
    
    double examen_mate, t1_mate, t2_mate, t3_mate;
    double examen_fisi, t1_fisi, t2_fisi;
    double examen_qui, t1_qui, t2_qui, t3_qui;
    double prom_tmate, nota_mate, prom_tfisi, nota_fisi, prom_tqui, nota_qui, prom_general;

    cout << "Examen matemáticas: ";
    cin >> examen_mate;
    cout << "Tarea 1 matemáticas: ";
    cin >> t1_mate;
    cout << "Tarea 2 matemáticas: ";
    cin >> t2_mate;
    cout << "Tarea 3 matemáticas: ";
    cin >> t3_mate;

    cout << "Examen física: ";
    cin >> examen_fisi;
    cout << "Tarea 1 física: ";
    cin >> t1_fisi;
    cout << "Tarea 2 física: ";
    cin >> t2_fisi;

    cout << "Examen química: ";
    cin >> examen_qui;
    cout << "Tarea 1 química: ";
    cin >> t1_qui;
    cout << "Tarea 2 química: ";
    cin >> t2_qui;
    cout << "Tarea 3 química: ";
    cin >> t3_qui;

    prom_tmate = (t1_mate + t2_mate + t3_mate) / 3;
    nota_mate = (examen_mate * 0.90) + (prom_tmate * 0.10);

    prom_tfisi = (t1_fisi + t2_fisi) / 2;
    nota_fisi = (examen_fisi * 0.80) + (prom_tfisi * 0.20);

    prom_tqui = (t1_qui + t2_qui + t3_qui) / 3;
    nota_qui = (examen_qui * 0.85) + (prom_tqui * 0.15);

    prom_general = (nota_mate + nota_fisi + nota_qui) / 3;

    cout << "Nota matemáticas: " << nota_mate << endl;
    cout << "Nota física: " << nota_fisi << endl;
    cout << "Nota química: " << nota_qui << endl;
    cout << "Promedio general: " << prom_general << endl;

    
}