class Note():
    def __init__(self, contents = None):
        self.contents = contents
    
    def write_contents(self, contents):
        self.contents = contents

    def remove_all(self):
        self.contents = ""
    
    def __str__(self):
        if self.contents:
            return self.contents
        else:
            return "삭제된 노트입니다"

class NoteBook():
    def __init__(self, title):
        self.title = title
        self.page_number = 1
        self.notes = dict()

    def add_note(self, note, page = 0):
        if self.page_number < 300:
            if page == 0:
                self.notes[self.page_number] = note
                self.page_number += 1
            else:
                self.notes = {page: note}
                self.page_number += 1
        else:
            print("page가 모 채워졌습니다")
            return
    def remove_note(self, page_number):
        if page_number in self.notes.keys():
            return self.notes.pop(page_number)
        else:
            print("해당 페이지는 존재하지 않습니다")

    def get_number_of_pages(self):
        return len(self.notes.keys())
    
    def get_number_of_all_characters(self):
        all_contents = ""
        for key in self.notes.keys():
            all_contents += self.notes[key].contents
        return len(all_contents)
    
def main():
    note1 = Note()
    note1.write_contents("안녕하세요")
    note2 = Note("방갑습니다")
    note3 = Note("하루에 3시간을 걸으면 7년 후에 지구를 한바퀴 돌 수 있다 -사무엘 존슨-")
    note4 = Note("행복의 문이 하나 닫히면 다른 문이 열린다 그러나 우리는 종종 닫힌 문을 멍하니 바라보다가 우리를 향해 열린 문을 보지 못하게 된다 ")
    print(note1)
    print(note2)
    note2.remove_all()
    print(note2)
    wise_saying_notebook = NoteBook("띵언노트")
    wise_saying_notebook.add_note(note1)
    wise_saying_notebook.add_note(note2)
    wise_saying_notebook.add_note(note3)
    wise_saying_notebook.add_note(note4)
    print(wise_saying_notebook.get_number_of_pages())
    print(wise_saying_notebook.get_number_of_all_characters())

    wise_saying_notebook.remove_note(2)
    print(wise_saying_notebook.get_number_of_pages)
