 #include <iostream>
using namespace std;

main (){
	cout<<"nama:fahrun nizar"<<endl;
	cout<<"nim:F1B019051"<<endl;
	cout<<"kelompok:11"<<endl;
	
	char matrik1 [3][3][3];
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j=0; j<3; j++)
		{
			cout << "Masukkan nilai matrik " << i << "," << j << " = ";
			cin >> matrik1[i][j];
		}
	}
	cout << endl;
	cout<<"nilai matrik dengan array 3 dimensi = "<<endl;
	for (i=0; i< 3; i++){
		for (j = 0; j < 3; j++){
			
			cout<<matrik1[i][j]<<" ";
		}
		cout << endl;
	}
}

