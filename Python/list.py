scores=[]
for i in range(3):
	score = int(input(f"score{i+1}: "))
	scores.append(score)

avg = sum(scores)/len(scores)
print(f"The average:{avg}")
