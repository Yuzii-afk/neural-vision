#include<iostream>
#include<filesystem>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(){
    string folder_name;
    
    // User input folder name
    cout << "Input folder:";
    cin >> folder_name;

    // check existence of the folder
    if (!filesystem::is_directory(folder_name)){
        cout << "Folder not exist!" << endl;
        return 1;
    }

    
    printf("%s has found!\n", folder_name.c_str());
    // Mat image = imread(name);
    // traversal the folder
    for (const auto& file : filesystem::directory_iterator(folder_name)){
        if (file.is_regular_file()){
            cout << file.path().filename().string() << endl;
        }

    }

    return 0;
}