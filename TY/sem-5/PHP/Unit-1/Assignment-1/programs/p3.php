<!-- 3. Write a PHP script to perform arithmetic operations on two variables. --> 
 <html>
	<head>
	</head>
		<body>
			<form method="POST">
				<h3> Enter Value for Calculation: </h3>
				Enter Value 1 <input type="text" name="no1"><br>
				Enter Value 2 <input type="text" name="no2"><br>
				<input type="submit" name="add" value="+">
				<input type="submit" name="sub" value="-">
				<input type="submit" name="mul" value="*">
				<input type="submit" name="div" value="/">
				<input type="submit" name="all" value="All Calculations"><br>
				
			</form>
			<?php
				if (isset($_POST['add'])){
					$a=$_POST['no1'];
					$b=$_POST['no2'];
					$add=$a+$b;
					echo"Addition is: $add";
				}
				else if (isset($_POST['sub'])){
					$a=$_POST['no1'];
					$b=$_POST['no2'];
					$sub=$a-$b;
					echo"Substraction is: $sub";
				}
				else if (isset($_POST['mul'])){
					$a=$_POST['no1'];
					$b=$_POST['no2'];
					$mul=$a*$b;
					echo"Multiplication is: $mul";
				}
				else if (isset($_POST['div'])){
					$a=$_POST['no1'];
					$b=$_POST['no2'];
					$div=$a/$b;
					echo"Division is: $div";
				}
				else if (isset($_POST['all'])){
					// addition
					$a=$_POST['no1'];
					$b=$_POST['no2'];
					$add=$a+$b;
					echo"Addtion is: $add"."<br>";
					//substraction
					$a=$_POST['no1'];
					$b=$_POST['no2'];
					$sub=$a-$b;
					echo"Substraction is: $sub"."<br>";
					// Multiplication
					$a=$_POST['no1'];
					$b=$_POST['no2'];
					$mul=$a*$b;
					echo"Multiplication is: $mul"."<br>";
					//division
					$a=$_POST['no1'];
					$b=$_POST['no2'];
					$div=$a/$b;
					echo"Division is: $div"."<br>";
				}
			?>
		</body>
</html>