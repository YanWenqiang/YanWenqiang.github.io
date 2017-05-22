#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;
/*
struct Node{
	int val;
	int fre;
	bool operator < (const Node& b)const {
		return fre < b.fre;
	}
	Node():val(0),fre(0){	}
}node[1000010];

vector<int> topKFrequent(vector<int>& nums, int k){	
	map<int,int>mp;
	priority_queue<Node>pq;
	int cnt = 0;
	for(int i = 0; i < nums.size(); i++){
		if(mp.find(nums[i]) == mp.end()){
			mp[nums[i]] = cnt++;
			node[mp[nums[i]]].val = nums[i];
			node[mp[nums[i]]].fre = 1;
		}
		else{
			node[mp[nums[i]]].fre++;
		}
	}
	for(int i = 0; i < cnt; i++){
		pq.push(node[i]);
	}
	vector<int>res;
	while(k--){
		res.push_back(pq.top().val);
		pq.pop();
	}
	return res;
}
*/



int main(int argc, char** argv) {
	int a[] = {1,1,1,2,2,3};
	vector<int>nums(a, a+6);
	//vector<int>ans = topKFrequent(nums,2);
	//for(int i = 0; i < ans.size(); i++)
	//	printf("%d ",ans[i]);
	return 0;
}
