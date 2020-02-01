module ReVIEW
  class LATEXBuilder
    def info(lines, caption = nil)
      puts '\\vspace{-2.5\\Cvs}'
      puts "\\begin{flushright}\n"
      lines.each do |line|
        blocked_lines = split_paragraph(lines)
        puts blocked_lines.join("\n\n")
      end
      puts "\\end{flushright}\n"
      puts '\\vspace{0.5\\Cvs}'
    end
  end
end