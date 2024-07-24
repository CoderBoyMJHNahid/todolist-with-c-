#include <iostream>
#include <string>
#include <list>

using namespace std;

list<string> data;

void homepage();

void addItem()
{

    int size;
    string item;
    cout << "How many items to add?" << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Write the item name here: ";
        cin >> item;
        data.push_back(item);
    }
    homepage();
}
void updateItem(int item)
{
    int updated_item = item - 1;
    string new_name;
    list<string>::iterator it = data.begin();
    cout << "What name you want to update?" << endl;
    cin >> new_name;

    advance(it, updated_item);
    *it = new_name;
    homepage();
}

void deleteItem(string item)
{

    data.remove(item);
    homepage();
}

void options()
{
    int option;
    cout << endl;
    cout << "Options:" << endl
         << "1 - Add a new list item" << endl
         << "2 - Update a list item " << endl
         << "3 - Delete the list item " << endl
         << "0 - Exit the program " << endl;

    cin >> option;

    string deleteitem;

    switch (option)
    {
    case 1:
        addItem();
        break;
    case 2:
        int item;
        cout << "Ok Please select which item to update with serial number " << endl;
        cin >> item;
        updateItem(item);
        break;
    case 3:
        cout << "Ok Please select which item " << endl;
        cin >> deleteitem;
        deleteItem(deleteitem);
        break;
    default:
        exit(1);
        break;
    }
}

void homepage()
{

    system("cls");

    cout << "\t All List view" << endl;
    cout << "--------------------------------" << endl;

    if (!data.empty())
    {
        list<string>::iterator elem = data.begin();

        for (int i = 0; i < data.size(); i++)
        {
            cout << i + 1 << " " << *elem << endl;
            elem++;
        }
    }
    else
    {
        cout << "       No data available" << endl;
    }

    options();
    getchar();
}