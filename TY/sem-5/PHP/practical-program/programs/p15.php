<!-- 15. Write a PHP script to check whether a number is a palindrome or not --> 
<html>
	<head>
	</head>
		<body>
			<form method="POST">
				<h3> Enter Value To Check The Palindrome Number: </h3>
				Enter value:  <input type="text" name="no1"><br>
				<input type="submit" name="check" value="Check Palindron Number"><br>
			</form>
			<?php
				if (isset($_POST['check'])) {
					$a = $_POST['no1'];
                    $rev=0;
                    $t=$a;

                        while($a>0){
                            $d=$a%10;
                            $rev=($rev*10)+$d;
                            $a=(int)($a/10);
                        }

                        if($t==$rev){
                            echo $t." "."is An Palindrome Number";
                        }
                        else{
                            echo $t." "."is Not An Palindrome Number";
                        }
				}
			?>
		</body>
</html>