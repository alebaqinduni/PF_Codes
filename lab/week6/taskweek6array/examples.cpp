/*
🧃 Simple meaning:

Instead of:

int a = 10;
int b = 20;
int c = 30;

We write:

int arr[3] = {10,20,30};
🔢 2. INDEX (VERY IMPORTANT)
arr[0] → 10  
arr[1] → 20  
arr[2] → 30

👉 Always starts from 0

🔁 3. INPUT USING LOOP (MOST COMMON QUESTION)
for(int i = 0; i < n; i++){
    cin >> arr[i];
}

👉 This is used in 80% questions

📤 4. OUTPUT USING LOOP
for(int i = 0; i < n; i++){
    cout << arr[i];
}
🔍 5. SEARCH (VERY IMPORTANT)
bool found = false;

for(int i = 0; i < n; i++){
    if(arr[i] == num){
        found = true;
    }
}
🗑️ 6. DELETE (MOST CONFUSING PART — YOU LEARNED THIS 💯)
for(int j = i; j < n-1; j++){
    arr[j] = arr[j+1];
}
n--;

👉 Shift left
👉 Reduce size

🔁 7. REVERSE ARRAY
for(int i = n-1; i >= 0; i--){
    cout << arr[i];
}
🔝 8. FIND LARGEST (VERY COMMON)
int max = arr[0];

for(int i = 1; i < n; i++){
    if(arr[i] > max){
        max = arr[i];
    }
}
🔤 9. STRING + ASCII (VERY IMPORTANT)

👉 Characters are numbers internally

'a' = 97  
'b' = 98
Next letter logic:
str[i] = str[i] + 1;
Special case:
if(str[i] == 'z') str[i] = 'a';


















*/