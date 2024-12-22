//import { Component } from '@angular/core';
import { Component, EventEmitter, Output } from '@angular/core';

@Component({
  selector: 'app-search',
  standalone: false,
  
  templateUrl: './search.component.html',
  styleUrl: './search.component.css'
})
export class SearchComponent {
  @Output() searchChange = new EventEmitter<string>();
  @Output() dateChange = new EventEmitter<string>();

  onSearchChange(search: string): void {
    this.searchChange.emit(search);
  }

  onDateChange(date: Date | null): void {
    if (date) {
      this.dateChange.emit(date.toISOString().split('T')[0]);
    } else {
      this.dateChange.emit('');
    }
  }
}
