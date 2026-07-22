<html>
	<head>
	</head>
	<body>
		<form method="POST">
			<?php
				for($i=1;$i<=2;$i++)
				{
					echo "Name:".($i).":<input type='text' name='Name[]'><br><br>";
					echo "Age:".($i).":<input type='text' name='Age[]'><br><br>";
				}
			?>
				<input type="Submit" name="Check" value="Click"><br>
		</form>
	</body>
</html>

<?php
	if(isset($_POST['Check']))
	{
		$Name=$_POST['Name'];
		$Age=$_POST['Age'];
		$temp=array();
		
			for($i=1;$i<=count($Name);$i++){
				$temp=[$Name[$i]]=[$Age[$i]];
			}
			foreach($temp as $value){
				echo "Name an is: ".$value."<br>";
			}
		
	}
?>

