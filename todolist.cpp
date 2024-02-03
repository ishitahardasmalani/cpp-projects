#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct todolist{
    int id;
    string task;
};

int ID=0;

void banner();
void addTask();
void showTask();
void searchTask();
void deleteTask();
void updateTask();


int main(){
    system("cls");
    while(true){
        banner();
        cout<<"1.Add a task"<<endl;
        cout<<"2.Show a task"<<endl;
        cout<<"3.Search a task"<<endl;
        cout<<"4.Delete a task"<<endl;
        cout<<"5.Update a task"<<endl;

        int choice;
        cout<<"\n Enter choice"<<endl;
        cin>>choice;

        switch(choice){
            case 1: 
                addTask();
                break;

            case 2: 
                showTask();
                break;

            case 3: 
                searchTask();
                break;

            case 4: 
                //deleteTask();
                break;

            case 5: 
                //updateTask();
                break;
        }
    }
}


void banner(){
    cout << "________________________________________" << endl;
    cout <<"\t TO-DO LIST" <<endl;
    cout << "________________________________________" << endl;

}

void addTask(){
    system("cls");
    banner();
    todolist todo;
    cout << "Enter new task: "<< endl;
    cin.get();
    getline(cin , todo.task);
    char save;
    cout<< "Do you want to save the task (Y/N): "<<endl;
    cin >> save;
    if(save == 'Y' || save == 'y'){
        ID++;
        ofstream fout;
        fout.open("todo.txt" , ios::app);
        fout << "\n" << ID;
        fout << "\n" << todo.task;
        fout.close();

        char more;
        cout << "Do you want to add more task (Y/N)?" << endl;
        cin >> more;

        if(more == 'Y' || more == 'y'){
            addTask();
        }
        else{
            system("cls");
            cout << "Your Task is added successfully!" << endl;
            return;
        }

    }
    system("cls");

}

void showTask(){
    system("cls");
    banner();
    todolist todo;
    ifstream fin;
    fin.open("todo.txt");
    cout << "Task : " << endl;

    while(!fin.eof()){
        fin >> todo.id;
        fin.ignore();
        getline(fin, todo.task);
        if(todo.task != ""){
            cout << "\t" << todo.id << ":" <<todo.task << endl;
        }
        else{
            cout << "\t Empty!" << endl;
        }
    }
    fin.close();
    char exit;
    cout << "Do you want to exit? (Y/N)" ;
    cin >> exit;
    if(exit != 'y' && exit != 'Y'){
        showTask();

    }
    system("cls");
}

void searchTask(){
    system("cls");
    banner();
    int id;
    cout << "Enter task id:" << endl;
    cin >> id;
    todolist todo;
    ifstream fin("todo.txt");
    while(!fin.eof()){
        fin >> todo.id;
        fin.ignore();
        getline(fin , todo.task);
        if(todo.id == id){
                system("cls");
                 cout << "\t" << todo.id << ":" <<todo.task << endl;
                 return;
        }
    }
    system("cls");
    cout << "Not Found!"<<endl;
    return;
}


void deleteTask(){
    
}