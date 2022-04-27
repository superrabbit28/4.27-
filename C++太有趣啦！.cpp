//#include <iostream>
//using namespace std;
//int main()
//{
//	cout<<"please enter one of the following choices: \n"
//	    <<"c) carnivore       p) pianist \n"
//	    <<"t) tree            g) game \n";
//	char ch;
//	cin>>ch;
//	while(ch!='c'&&ch!='p'&&ch!='t'&&ch!='g')
//	{
//		cout<<"please enter c,p,t,g: ";
//		cin>>ch;
//	}
//	switch(ch)
//	{
//		case 'c': cout<<"A maple is a car.";break;
//		case 'p': cout<<"A maple is a pianisrt.";break;
//		case 't': cout<<"A maple is a tree.";break;
//		case 'g': cout<<"A maple is a game.";break;
//	  }  
//    return 0;
//}

//#include<iostream>
//using namespace std;
 //   const int size=20;
//	char arr;
//	struct bop{
//		char fullname[20];
//		char title[20];
//		char bopname[20];
//		int preference;  
//	};
//	bop a[size]={{"qqq","QQQ","qQ",0},{"www","WWW","wW",1},{"eee","EEE","eE",2},{"rrr","RRR","rR",0}};
//	void printname()
//	{
//		for(int i=0;i<20;i++)
//		{   if(a[i].fullname!=0)
//			cout<<a[i].fullname<<endl;
//			else
//			 break;
//		}
///	}
//int main()
//{
 //   cout<<"a.displine by name     b.display by title \n"
//	    <<"c.displine by bopname  d.display by preference\n"
//	    <<"quit \n";
//	cin>>arr;
//	void printname();
//	void print_title();
//	void print_bopname();
//	void print_preference();
//	void print_quit();
//	
//	
//	switch(arr)
//	{
//		case 'a': printname;break;
//		case 'b': print_title;break;
//		case 'c': print_bopname;break;
//		case 'd': print_preference;break;
//		case 'q': print_quit;break;
///	}
//	return 0;
//#include<iostream>
//using namespace std;
//int main()
//{
//	int wage;
//	cin>>wage;
//	double payer=0.0;
//	while(wage>0)
//	{
//	  if(wage<5000)
//	  	payer=0;
//	  else if(wage>=5000&&wage<=15000)
//	    payer=(wage-5000)*0.1;
//	  else if(wage>=15000&&wage<=35000)
//	    payer=1000+(wage-20000)*0.15;
  //    else if(wage>35000)
	//    payer=4000+(wage-35000)*0.2;
	//	cout<<"所得税为 "<<payer<<endl;	
	//	cin>>wage;			
	//}	
//	return 0;
//}


//#include<iostream>
//#include<string.h>
//#include<cctype>
//using namespace std;
//int main()
//{
//	cout<<"Enter words (q to quit):\n";
//	char words[10];
//	cin>>words;
//	int others=0,yuan=0,feiyuan=0;
//	while(strcmp(words,"q")!=0)
//	{
//		if(!isalpha(words[0]))
//		{
//			others++;
//		  switch(words[0])
//		  {
//		  	case 'a':
///		  	case 'e':	
//		  	case 'i':
//		  	case 'o':
//		  	case 'u':
//			  yuan++;break;
//		  	default: feiyuan++;
//		}
//		cin>>words;	
//	}
//	
//}
//cout<<"others= "<<others<<"yuan= "<<yuan<<"feiyuan= "<<feiyuan;
//	return 0;	
//}


//#include<iostream>
//#include<fstream>
//#include<cstdlib>
//using namespace std;
//int main()
//{
//	ifstream fin;
//	fin.open("file_name");
 //   char arr;
//	if(!fin.is_open())	
//	{
//		cout<<"文件不存在\n"; 
//		exit(EXIT_FAILURE);
//	}
//	int count=0;
//	while(!fin.eof())
//	{
//		fin>>arr;
//		count++;
//	}
//	cout<<"共包含"<<count<<"个字符"<<endl; 
//	fin.close();
//	return 0;
//}


//7.1#include<iostream>
//using namespace std;
//float sumif(int m,int n);
//int main()
///{
///	int x,y;
//	cin>>x;
//	cin>>y;
//	float aveif=sumif(x,y);
//	while(x!=0||y!=0)
//	{
//		cout<<"调和平均数为"<<aveif;
//		cin>>x;
//		cin>>y;
//	}
//	return 0;
//}
//float sumif(int m,int n)
//{
//	float ave=2.0*m*n/(m+n);
//	return ave;
//}

//7.2
//#include<iostream>
//using namespace std;
//int shuru(int arr[]);
//void dayin(int arr[],int n);
//float pingjunchengji(int arr[],int n);
//int main()
//{
//	int SIZE=10;
//	int score[SIZE];
	
//	int size=shuru(score);
//	dayin(score,size);
//	int sum=pingjunchengji(score,size);
//	cout<<"平均值为"<<sum; 
//	return 0;
// } 
//int shuru(int arr[])
//{
//	int i=0;
//	do{
//		cout<<"请输入第"<<i+1<<"个高尔夫成绩"; 
//	    cin>>arr[i];
//	    cin.get();
//	    cout<<"输入s来中断输入";
//	    if(cin.get()=='s')
//	   {
//		 for(;i<10;i++)
//		 arr[i]=0;
//	 	 break;
  // 	   } 	
//	}while(i<10);
//	return i;
//}
//void dayin(int arr[],int n)
//{
 //  for(int i=0;i<n;i++)	
  // {
  // 	cout<<arr[i]<<endl;
  // }	
//}
//float pingjunchengji(int arr[],int n)
//{
//	int sum=0;
//	for(int i=0;i<n;i++)
//	{
//		sum+=arr[i];
//	}
//	return sum;
//}

//7.3
//#include<iostream>
//using namespace std;
//struct box{
//	char maker[40];
//	float height;
//	float width;
//	float length;
//	float volume;
//};
//void print(box cm);
//void printr(box *cy);
//int main()
//{   
 //   box cv={"supperrabbit",2,2,2,100.5};
//	print(cv);
//	printr(&cv);
//	return 0;
//}
//void print(box cm)
//{
//	cout<<cm.maker<<" "<<cm.height<<" "<<cm.width<<" "<<cm.length<<" "<<cm.volume <<endl;
//}
//void printr(box *cy)
//{
//	cy->volume=cy->height*cy->width*cy->length;
//	cout<<cy->volume<<endl;
//}

//7.5
//#include<iostream>
//using namespace std;
//int jiecheng(int can);
//int main()
//{
//	int n;
//	cin>>n;
//	while(n>0){		
//	    int s=jiecheng(n);
//	    cout<<n<<"的阶乘为 "<<s<<endl; 
//	    cout<<"请输入一个整数参数： ";
//	    cin>>n;
//	}
//	return 0;
//}
//int jiecheng(int can)
//{   
 //   int sum=0;
 //  if(can==0)
 //  {
//   	return 1;
//   }
//   else if(can>0)
 //   {
 //   	 sum=can*jiecheng(can-1);
 //   	 return sum;
//	}
//}

//7.6
//#include<iostream>
//using namespace std;
//const int size=10;
//int fill_array(double aww[],int n);
//void show_array(double aww[],int n);
//void reverse_array(double aww[],int n);
//int main()
//{
//	double arr[size];
//	int q=fill_array(arr,size);
//	cout<<"q= "<<q;
//	show_array(arr,q);
//	reverse_array(arr,9);
//	
//	return 0;
///}
//int fill_array(double aww[],int n)
//{
//	int count=0;
//	int i=0;
//	double a;
//	cin>>a;
//	while(i<n)
//	{
//		if(cin.get()=='s')
//		{
//			return count;
//		}
//		else{
//			aww[i]=a;
//			i++;
//			count++;
//			cin>>a;	
//		}
//		
//	}
//	return count;
//}
//void show_array(double aww[],int n)
//{
//	for(int i=0;i<n;i++)
//	{
//		cout<<aww[i]<<endl;
//	 } 
	
//}
//oid reverse_array(double aww[],int n)
//{
//	double temp;
//	for(int i=0;i<n/2;i++,n--)
//	{
//		temp=aww[i];
//		aww[i]=aww[n];
//		aww[n]=temp;
//	}
//	for(int i=0;i<n;i++){
//		cout<<aww[i]<<endl;
//	}
 //} 

//7.8
//#include<iostream>
//using namespace std;
//struct spend{
//		double money[]; 
//	};
//const char*arr[]={"spring","summer","autumn","winter"};
//void fill(double money[]);
//void show(double money[]);
//int main()
//{
//	spend ps;
//	fill(ps.money);
//	show(ps.money);
//	return 0;
//}
//void fill(double money[])
//{
//	for(int i=0;i<4;i++)
//	{
//		cout<<"enter"<<arr[i]<<"expenses: ";
//		cin>>money[i];	
//	}
//}
//void show(double money[])
//{
//	double total=0.0;
//	for(int i=0;i<4;i++)
//	{
//		cout<<arr[i]<<":$"<<money[i]<<endl;
//		total+=money[i];
//	}
//	cout<<"total: "<<total; 	
//}

//7.9
//int getinfo(student pa[],int n);
//void display1(student st);
//void display2(student* st);
//int main()
//{
//	student *ptr_stu=new student[40];
//	int entered=getinfo(ptr_stu,40);
//	for(int i=0;i<40;i++)
//	{
//		display1(ptr_stu[i]);
//		display2(&ptr_stu[i]);
//	}	
//}
//int getinfo(student pa[],int n)
//{
///	int count=0;
//	int i=0;
//	cin>>pa.fullname>>" ">>pa.hobby>>" ">>pa.ooplevel;
//	while(i<n)
//	{
//		if(cin.getline()=="\n")
//		{
//			break;
//		}
//		else{
//			count++;
//		}
//	}
//	return count;
//}
//void display1(student st)
//{
//	cout<<st.fullname<<st.hobby<<st.ooplevel;
//}
//void display2(student* st)
/{
//	cout<<st->fullname<<st->hobby<<st->ooplevel; 
//}










