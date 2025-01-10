### **Pseudocode for Deletion :**

```
if start = NULL → Underflow
else
    set Previous = NULL
    set Current = start
    while Current ≠ Loc
        set Previous = Current
        set Current = Link[Current]
    if Current = NULL → Element not found
    else
        if Previous = NULL
            start = Link[Current]
        else
            Link[Previous] = Link[Current]
        Link[Current] = Avail
        Avail = Current
```

---

### **Explanation :**

1. **`if start = NULL → Underflow`**
   - এটি চেক করছে যে লিস্টটি ফাঁকা কিনা।
   - যদি **`start`** `NULL` হয়, তাহলে বুঝতে হবে লিস্টে কোনো নোড নেই, এবং **"Underflow"** ঘটেছে। ডিলিট করার মতো কোনো নোড নেই।

---

2. **`set Previous = NULL` এবং `set Current = start`**
   - **`Previous`** এবং **`Current`** নামে দুইটি পয়েন্টার ব্যবহার করা হচ্ছে:
     - **`Previous`**: বর্তমান নোডের আগের নোডের ঠিকানা ধরে রাখবে।
     - **`Current`**: বর্তমান নোডের ঠিকানা ধরে রাখবে।
   - প্রাথমিক অবস্থায় **`Previous`** হলো `NULL` এবং **`Current`** হলো **`start`**।

---

3. **`while Current ≠ Loc`**
   - এই লুপটি চলবে যতক্ষণ না পর্যন্ত আমরা **`Loc`** নোডটি খুঁজে পাই।
   - **`Previous`**-কে আপডেট করে **`Current`**-এর আগের নোডে সেট করা হচ্ছে।
   - **`Current`**-কে আপডেট করে পরবর্তী নোডে নিয়ে যাওয়া হচ্ছে।

---

4. **`if Current = NULL → Element not found`**
   - যদি **`Current`** `NULL` হয়, এর মানে হলো **`Loc`** নোডটি লিস্টে নেই।
   - তখন আমরা "Element not found" বলে কাজ শেষ করব।

---

5. **`if Previous = NULL`**
   - যদি **`Previous`** `NULL` হয়, এর মানে হলো **`Loc`** নোডটি লিস্টের **প্রথম** নোড।
   - সেক্ষেত্রে, **`start`**-কে আপডেট করে **`Link[Current]`**-এ সেট করা হবে, অর্থাৎ দ্বিতীয় নোডটি এখন লিস্টের প্রথম নোড হবে।

---

6. **`else`**
   - যদি **`Previous`** `NULL` না হয়, এর মানে হলো **`Loc`** লিস্টের মাঝখানে বা শেষে রয়েছে।
   - **`Link[Previous] = Link[Current]`** করে **`Previous`**-এর পরবর্তী নোডকে **`Current`**-এর পরবর্তী নোডে সেট করা হবে। এতে **`Current`** নোডটি লিস্ট থেকে বাদ পড়ে যাবে।

---

7. **`Link[Current] = Avail` এবং `Avail = Current`**
   - ডিলিট করা নোডটিকে **ফ্রি লিস্টে** ফিরিয়ে নেওয়া হচ্ছে।
   - **`Link[Current]`**-কে **`Avail`**-এ সেট করা হচ্ছে এবং **`Avail`**-কে আপডেট করে **`Current`**-এ সেট করা হচ্ছে। 

---

### **এই Process এর মূল ধারণা :**
- **`Previous`**: আগের নোড ট্র্যাক করে।
- **`Current`**: যে নোডটি ডিলিট করা হবে, সেটি ট্র্যাক করে।
- **`Avail`**: ডিলিট করা নোডকে ফ্রি লিস্টে যোগ করে।
- **Start Update**: লিস্টের প্রথম নোড পরিবর্তন করে।