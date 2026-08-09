
students = [
	("S001", "王林", 85, 92, 78),
	("S002", "李慕婉", 92, 88, 95),
	("S003", "十三", 78, 85, 82),
	("S004", "曾牛", 88, 79, 91),
	("S005", "周轶", 95, 96, 89),
	("S006", "王卓", 76, 82, 77),
	("S007", "红蝶", 89, 91, 94),
	("S008", "徐立国", 75, 69, 82),
	("S009", "许木", 86, 89, 98),
	("S010", "遁天", 66, 59, 72),
]


def per_student_summary(students):
	"""计算每个学生的总分与平均分并输出"""
	print("每个学生的总分与平均分：")
	summary = []
	for sid, name, chinese, math, english in students:
		total = chinese + math + english
		avg = total / 3
		summary.append((sid, name, total, avg))
		print(f"{sid}\t{name}\t总分: {total}\t平均分: {avg:.2f}")
	print()
	return summary


def subject_stats(students):
	"""统计每门科目的最低分、最高分与平均分并输出"""
	chinese_scores = [s[2] for s in students]
	math_scores = [s[3] for s in students]
	english_scores = [s[4] for s in students]

	def stats(arr):
		return min(arr), max(arr), sum(arr) / len(arr)

	c_min, c_max, c_avg = stats(chinese_scores)
	m_min, m_max, m_avg = stats(math_scores)
	e_min, e_max, e_avg = stats(english_scores)

	print("各科成绩统计：")
	print(f"语文 -> 最低: {c_min}\t最高: {c_max}\t平均: {c_avg:.2f}")
	print(f"数学 -> 最低: {m_min}\t最高: {m_max}\t平均: {m_avg:.2f}")
	print(f"英语 -> 最低: {e_min}\t最高: {e_max}\t平均: {e_avg:.2f}")
	print()

	return {
		'语文': (c_min, c_max, c_avg),
		'数学': (m_min, m_max, m_avg),
		'英语': (e_min, e_max, e_avg),
	}


def find_excellent(students, threshold=90.0):
	"""查找平均分大于 threshold 的学生并输出"""
	excellent = []
	for sid, name, chinese, math, english in students:
		avg = (chinese + math + english) / 3
		if avg > threshold:
			excellent.append((sid, name, avg))

	print(f"平均分大于 {threshold} 的学生：")
	if not excellent:
		print("无")
	else:
		for sid, name, avg in excellent:
			print(f"{sid}\t{name}\t平均分: {avg:.2f}")
	print()
	return excellent


if __name__ == '__main__':
	per_student_summary(students)
	subject_stats(students)
	find_excellent(students, 90.0)

