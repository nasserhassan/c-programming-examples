
  for(c=1; c<=24; c++)
   {
     Differ = P[c] - Mean;
     Varsum = Varsum + pow(Differ,2);
      Number++;
          fscanf(fp1,"%f", &P[c]);
   }
  
  Variance = Varsum / (float)Number;
  SD = sqrt(Variance);
  
