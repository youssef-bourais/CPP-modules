
#include <iostream>
#include <vector>

void merg(std::vector<std::vector<int> > &Vec1, std::vector<std::vector<int> > &Vec2, std::vector<std::vector<int> > &Vec, int size)
{
    int i = 0;
    int l = 0;
    int r = 0;
    while (l < size/2 && r < (size - (size/2))) 
    {
        if(Vec1[l][0] < Vec2[r][0])
        {
            Vec[i] = Vec1[l];
            l++;
        }
        else
        {
            Vec[i] = Vec2[r];
            r++;
        }
        i++;
    }
    while (l < size/2) 
    {
        Vec[i] = Vec1[l];
        i++;
        l++;
    }   
    while (r < (size - size/2)) 
    {
        Vec[i] = Vec2[r];
        i++;
        r++;
    }
}

void printVector(const std::vector<std::vector<int> >& vec) {
    for (std::size_t i = 0; i < vec.size(); ++i) {
        std::cout << "[" << vec[i][0] << ", " << vec[i][1] << "] ";
    }
    std::cout << "\n";
}

void mergesortt(std::vector<std::vector<int> > &T, int size)
{
    if(T.size() <= 1)
        return ;
    int midle = size/2;

    std::vector<std::vector<int> > vec1;
    std::vector<std::vector<int> > vec2;


    int i = 0;
    while (i < size) 
    {
        if(i < midle)
            vec1.push_back(T[i]);
        else 
            vec2.push_back(T[i]);
        i++;
    }
    mergesortt(vec1, midle);
    mergesortt(vec2, size - midle);
    merg(vec1, vec2, T, size); 
}



/* void merge(std::vector<std::vector<int> >& Vec1, std::vector<std::vector<int> >& Vec2, std::vector<std::vector<int> >& Vec)  */
/* { */
/*     int leftIndex = 0; */
/*     int rightIndex = 0; */
/*     int i = 0; */
/*     int size = static_cast<int>(Vec.size()); */
/**/
/*     while (leftIndex < size / 2 && rightIndex < size / 2)  */
/*     { */
/*         if (Vec1[leftIndex][0] < Vec2[rightIndex][0])  */
/*         { */
/*             Vec[i++] = Vec1[leftIndex++]; */
/*         } */
/*         else  */
/*         { */
/*             Vec[i++] = Vec2[rightIndex++]; */
/*         } */
/*     } */
/**/
/*     while (leftIndex < size / 2)  */
/*     { */
/*         Vec[i++] = Vec1[leftIndex++]; */
/*     } */
/**/
/*     while (rightIndex < size / 2)  */
/*     { */
/*         Vec[i++] = Vec2[rightIndex++]; */
/*     } */
/* } */

/* void mergesort(std::vector<std::vector<int> >& T)  */
/* { */
/*     if (T.size() <= 1) */
/*         return; */
/**/
/*     std::vector<std::vector<int> > vec1; */
/*     std::vector<std::vector<int> > vec2; */
/**/
/*     int midle = (int)T.size()/2; */
/*     for (int i = 0; i < midle; ++i) */
/*         vec1.push_back(T[i]); */
/**/
/*     for (int i = midle; i < static_cast<int>(T.size()); ++i) */
/*         vec2.push_back(T[i]); */
/**/
/*     mergesort(vec1); */
/*     mergesort(vec2); */
/*     merge(vec1, vec2, T); */
/* } */

int main() {
    std::vector<std::vector<int> > testVector;

    std::vector<int> v1;
    v1.push_back(5);
    v1.push_back(9);
    testVector.push_back(v1);

    std::vector<int> v2;
    v2.push_back(3);
    v2.push_back(10);
    testVector.push_back(v2);

    std::vector<int> v3;
    v3.push_back(-4);
    v3.push_back(5);
    testVector.push_back(v3);

    std::vector<int> v4;
    v4.push_back(92);
    v4.push_back(178);
    testVector.push_back(v4);

    std::vector<int> v5;
    v5.push_back(-18);
    v5.push_back(46);
    testVector.push_back(v5);

    std::vector<int> v6;
    v6.push_back(0);
    v6.push_back(7);
    testVector.push_back(v6);

    std::cout << "Original Vector:\n";
    printVector(testVector);
    std::cout << "\n";

    
    mergesortt(testVector, testVector.size());

    std::cout << "Sorted Vector:\n";
    printVector(testVector);

    return 0;
}
