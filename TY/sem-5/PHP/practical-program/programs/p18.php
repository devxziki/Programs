<!-- 18. Write a PHP script to find palindrome numbers between 1 and 100. --> 
<?php
    echo "Palindrome numbers between 1 and 100:<br>";
    
    for($i=1; $i<=100; $i++){
        $n=$i;
        $rev=0;
        while($n>0){
            $d=$n%10;
            $rev=($rev*10)+$d;
            $n=(int)($n/10);
        }

        if($i==$rev){
            echo $i."<br>";
        }
    }
?>