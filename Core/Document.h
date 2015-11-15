#ifndef DOCUMENT_H
#define DOCUMENT_H

namespace SerenityCore
{

	class Document
	{

		private:
		
			int m_top_line;
			int m_current_line;
			int m_current_column;
		
		protected:
		
			virtual int GetScreenLines();
			virtual int GetScreenColumns();
			virtual void SetCursorPosition(int x, int y);
			virtual void RenderLine(int y, const char *line);
			
			void MouseClick(int x, int y);
			void CursorUp();
			void CursorDown();
			void CursorLeft();
			void CursorRight();
			void PageUp();
			void PageDown();

		public:

			Document();
			~Document();

	};

}

#endif // DOCUMENT_H
